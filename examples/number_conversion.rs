fn main() {
    let four: u32 = 4;
    let three: u32 = 3;

    let half: f64 = 0.5;

    println!("add u32 and f64    : 4 + 0.5 = {}", four + half);
    println!("divide u32 and u32 : 4 / 3   = {}", four / three);
    println!("divide f64 and u32 : 0.5 / 4 = {}", half / four);
    println!("divide u32 by f64  : 4 / 0.5 = {}", four / half);
} 
