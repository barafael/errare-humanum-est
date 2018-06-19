use std::io::BufRead;

fn main() {
    println!("Enter your password!");
    let stdin = std::io::stdin();
    let buffer = stdin.lock().lines().next().unwrap().unwrap();

    std::mem::drop(buffer);

    println!("buffer: {}", buffer);
}
