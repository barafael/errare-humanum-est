fn main() {
    let mut pointer: &u32 = &1u32;

    println!("u32 at pointer: {}", *pointer);
    {
        let twelve = 12;
        pointer = &twelve;
    }
    println!("{}", *pointer);
}