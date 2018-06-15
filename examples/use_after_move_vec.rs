fn main() {
    let origin: String = "This is a string.".into();

    let mut vec = Vec::new();

    // Clone origin and push onto vec
    vec.push(origin.clone());

    println!("After pushing origin clone onto vec, origin is unchanged: {}", origin);

    // Move origin onto vec
    vec.push(origin);

    println!("After moving origin into vec, it cannot be used: {}", origin);

    println!("Contents of vec: {:?}", vec);
}
