use std::io::{self, BufRead};

fn main() {
    loop {
        println!("Enter an integer number:");

        let stdin = io::stdin();
        let buffer = stdin.lock().lines().next().unwrap().unwrap();

        let choice: usize = buffer.parse().unwrap_or(100);
        let result = match choice {
            0 => "zero for u",
            1...9 => "choice not great",
            i if i % 2 == 1 => "larger than or equal 11, and odd",
            i if i == 300 => "This is Sparta!",
            _ => "larger than or equal 10, and even",
        };
        println!("{}", result);
    }
}
