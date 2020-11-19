const BUF_SIZE: usize = 10;

extern "C" {
    fn malloc(size: usize) -> *mut u8;
    fn free(ptr: *mut u8);
}

fn main() {
    unsafe {
        let array: *mut u8 = malloc(BUF_SIZE * std::mem::size_of::<u64>());
        for index in 0..BUF_SIZE {
            *((array as usize + index * std::mem::size_of::<u64>()) as *mut u64) = index as u64;
        }
        let ptr: *mut u64 = (array as usize + 5 * std::mem::size_of::<u64>()) as *mut u64;

        free(ptr as *mut u8);
        println!("{:?}'s array has been set free!\n", ptr);

        let val = *((array as usize + 5 * std::mem::size_of::<u64>()) as *mut u64);

        println!("{}", val);
    }
}
