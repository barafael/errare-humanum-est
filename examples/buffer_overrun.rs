use std::io::{self, BufRead};

fn main() {
    println!("Enter password:");
    let stdin = io::stdin();
    let buffer = stdin.lock().lines().next().unwrap().unwrap();

    let mut password_correct = false;
    if buffer == "pass123" {
        println!("Correct password");
        password_correct = true;
    } else {
        println!("Wrong password");
    }
    if password_correct {
        println!("Privileged access granted!!!");
    }
}
