fn get_random_distance() -> &u32 {
    &1356
}

fn get_random_distance_static() -> &'static u32 {
    let d: &'static u32 = &1356;
    d
}

fn main() {
    let d = get_random_distance_static();
    println!("Initiating jump of {} light years.", *d);
}