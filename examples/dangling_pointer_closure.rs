fn get_lambda_with_local_reference() -> impl Fn(i32) -> i32 {
    let local_arr = [1, 2, 3];
    |value| value + local_arr[2]
}

fn get_lambda_with_moved_reference() -> impl Fn(i32) -> i32 {
    let local_arr = [1, 2, 3];
    move |value| value + local_arr[2]
}

fn main() {
    let function = get_lambda_with_local_reference();
    println!("lambda uses stack-local reference: {}", function(6));
}
