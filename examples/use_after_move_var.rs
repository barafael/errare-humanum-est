fn main() {
    let mut origin: String = "This is a string".into();

    let moved = origin;

    println!("origin after move: {}", origin);
    println!("moved  after move: {}", moved);

    // Binding that was moved out from can be reassigned
    origin = "Hello, I'm back!".into();
    println!("origin after reassignment: {}", origin);
}
