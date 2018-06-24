use std::io::BufRead;

fn main() {
    println!("Enter your name!");
    let stdin = std::io::stdin();
    let buffer = stdin.lock().lines().next().unwrap().unwrap();

    drop(buffer);

    println!("buffer: {}", buffer);
}
