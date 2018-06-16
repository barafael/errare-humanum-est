// this function's return type contains a borrowed value,
// but there is no value for it to be borrowed from
// ^ literally what rustc has to say about it
fn get_random_distance() -> &u32 {
    &1356
}

// Annotating the lifetime of the variable to be 'static
// The variable is not on the stack, but in a static memory location.
fn get_random_distance_static() -> &'static u32 {
    let d: &'static u32 = &1356;
    d
}

fn main() {
    let d = get_random_distance();
    println!("Initiating jump of {} light years.", *d);
}