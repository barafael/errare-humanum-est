use std::io::{self, BufRead};

fn main() {
    println!("Enter password:");
    let stdin = io::stdin();
    let buffer = stdin.lock().lines().next().unwrap().unwrap();

    if buffer == "pass123" {
        println!("Correct password!");
    } else {
        println!("Wrong password!");
    }
    std::mem::forget(buffer);
}
