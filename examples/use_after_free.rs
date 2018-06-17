use std::io::BufRead;

fn main() {
    let stdin = std::io::stdin();
    let buffer = stdin.lock().lines().next().unwrap().unwrap();

    std::mem::forget(buffer);
    //std::mem::drop(buffer);

    println!("buffer: {}", buffer);
}
