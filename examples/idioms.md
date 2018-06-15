# Some idioms from Python and Rust

## Examples taken from http://benjamincongdon.me/blog/2018/03/23/Python-Idioms-in-Rust/

### Enumerating some array

Python:
```python
arr = ['a', 'b', 'c']
for idx, val in enumerate(arr):
    print("{}, {}".format(idx, val))
```

Rust:
```rust
let arr = vec!['a', 'b', 'c'];
for (idx, val) in arr.iter().enumerate() {
    println!("{}, {}", idx, val);
}
```

### Zipping iterators until one is empty
Python:
```python
letters = ['a', 'b', 'c']
numbers = [1, 2, 3]
for l, n in zip(letters, numbers):
    print("{}, {}".format(l, n))
```

Rust:
```rust
let letters = vec!['a', 'b', 'c'];
let numbers = vec![1, 2, 3];
for zipped in numbers.iter().zip(letters) {
    println!("{:?}", zipped);
}
```

Infinite lazy iterators in Rust:
```rust
let start_at_10 = 10..;
let letters = vec!['a', 'b', 'c'];
for zipped in start_at_10.zip(letters) {
    println!("{:?}", zipped);
}
```

### Tuples and Destructuring
Python:
```python
foo = ('foo', 1, None)
a, b, c = foo
assert a == 'foo'
assert foo[0] == 'foo'
```

Rust:
```rust
let foo = ("foo", 1, None::<i32>);
let (a, b, c) = foo;
println!("{}", a); // "foo"
println!("{}", foo.0); // "foo"
```

### "Ternary operator" or single-line if-statement
Python:
```python
result = expensive_function() if some_condition else None
```

Rust:
```rust
let result = if some_condition { expensive_function() } else { 0 };
```
