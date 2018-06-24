use std::ptr;

fn main() {
    let pointer: *mut u32 = ptr::null_mut();
    unsafe {
        *pointer = 10;
    }
    unsafe {
        println!("{}", *pointer);
    }
}
