use std::ptr;

fn main() {
    let pointer: *mut u32 = ptr::null_mut();
    unsafe {
        pointer.write(10);
    }
    unsafe {
        println!("{}", pointer.read());
    }
}
