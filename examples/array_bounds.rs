fn main() {
    // Rust panic!s when accessing out of bounds.
    let mut array = [1, 2, 3, 4, 5];

    for i in 0..array.len() + 5 {
        array[i] = 3;
    }
    println!("{:?}", array);
}
