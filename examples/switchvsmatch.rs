use std::io::{self, BufRead};

fn main() {
    loop {
        println!("Enter an integer number from 1 to 20 inclusive\n");

        let stdin = io::stdin();
        let buffer = stdin.lock().lines().next().unwrap().unwrap();

        let choice: usize = buffer.parse().unwrap_or(100);

        match choice {
            0..=5 => println!("Really low number"),
            6..=15 => println!("Thats better"),
            16..=20 => println!("Up there"),
            _ => println!("I said 0 to 20, inclusive!"),
        }
    }
}
