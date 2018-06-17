// this function's return type contains a borrowed value,
// but there is no value for it to be borrowed from
// ^ literally what rustc has to say about it
fn get_ref() -> &u32 {
    &1356
}

// Annotating the lifetime of the variable to be 'static
// The variable is not on the stack, but in a static memory location.
fn get_ref_static() -> &'static u32 {
    let d: &'static u32 = &1356;
    d
}

fn main() {
    let d = get_ref();
    println!("Initiating jump of {} light years.", *d);
}
