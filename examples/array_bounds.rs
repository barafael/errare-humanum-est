fn main() {
    let mut array: Box<Vec<u32>> = Box::new(vec![0; 15]);

    for i in 0..array.len() + 5 {
        array[i] = 3;
    }
    println!("{:?}", array);
}
