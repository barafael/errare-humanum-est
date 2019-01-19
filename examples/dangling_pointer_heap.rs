fn main() {
    /* Vec is heap-allocated, growing (reallocating) array */
    let mut array = Vec::new();
    for index in 0..10 {
        array.push(index as u32);
    }

    // Take a pointer into the heap-allocated array
    let reference = &mut array[6];

    // at this point, reference becomes a dangling pointer
    drop(array);

    println!("{}'s array has been set free!", *reference);
    *reference = 3;
    println!("array[6] was modified to {} after being free'd!", *reference);
}
