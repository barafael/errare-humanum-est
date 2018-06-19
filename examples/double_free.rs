#![feature(alloc_system)]
extern crate alloc_system;

use std::io::{self, BufRead};

fn main() {
    println!("Enter password:");
    let stdin = io::stdin();
    let buffer = stdin.lock().lines().next().unwrap().unwrap();

    if buffer == "pass123" {
        println!("Correct password!");
        std::mem::drop(buffer);
    } else {
        println!("Wrong password!");
        std::mem::drop(buffer);
    }
    std::mem::drop(buffer);
}
