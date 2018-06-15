#![feature(alloc_system)]
extern crate alloc_system;

use std::io::{self, BufRead};

fn main() {
    println!("Enter password:");
    let stdin = io::stdin();
    let buffer = stdin.lock().lines().next().unwrap().unwrap();

    std::mem::forget(buffer);
}