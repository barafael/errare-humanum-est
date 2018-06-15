Different thinking regarding brackets and blocks:

```c
if (some_condition)
    some_action();

// sane variant:
if (some_condition) {
    some_action();
}
```

No one-line-blocks allowed in Rust:
```rust
if some_condition {
    some_action();
}
```

This is because Rust distinguishes between expressions and statements.
Somewhat weird consequences:

```c
int x = 10;
// Both expression (evaluates to 10) and statement (increments x).
x++;
// Same here, except expression evaluates to 12 now.
++x;
```

In Rust, this looks different, because there are no statements, only expressions whose value is suppressed:

```rust
let mut x = 10;
//x++ // not possible
// An expression with value '()', which is suppressed with ';' but has a side effect
x += 1;
```

This prevents such chaos:

```c
int c = 0;
// What does this evaluate to?
int d = ++c + c++;
// and this?
int e = ++c + c++ + c;
```

The problem here is that parts of the expression increment c as a side effect.
So 'c++' is both an expression and a statement.

Another weird consequence: returning from functions

```c
int some_function(int x) {
    return x + 3;
}
```

```rust
fn some_function(x: u32) -> u32 {
    x + 3
}

fn some_void_func(x: u32) {
    x + 3; // < note the semicolon
}
// Note: function actually returns '()', which is value of expression 'x + 3;'
// Note: the 'return' keyword can still be used for early returns
```

Now on to some other consequences: The Ternary Operator

```c
int val = 5;
int result = val < 10 ? 10 : val;
```

```rust
let val = 5;
let result = if val < 10 { 10 } else { val };
```

Note that in the Rust snippet, each branch of the if statement evaluates to a number.
This is enforced and can be very useful:

```rust
let choice = 17;
let result = match choice {
        0 => "zero for u",
        1...9 => "choice not great",
        i if i % 2 == 1 => "larger than or equal 11, and odd",
        i if i == 42 => "u r n4rd",
        i if i == 300 => "This is Sparta!",
        _ => "larger than or equal 10, and even",
    }; // < semicolon needed, because this expression binds to 'result'
```

Every match arm must evaluate to the same type (&str here).
The patterns must be exhaustive!
This is like switch/case on steroids.

Useful for ergonomic error handling with algebraic error types(Option, Result): if let

```rust
    let number: Option<i32> = Some(8);

    if let Some(i) = number {
        println!("Matched {:?}!", i);
    }

    if let Some(i) = number {
        println!("Matched {:?}!", i);
    } else {
        println!("Option contained None!");
    };
```

This works with any pattern, on enums, structs, and tuples.

Nothing beats preprocessor based polymorphism! \s
```c
#define at_least_val(val, num) \
    ((num) < (val) ? (val) : (num)) \
printf("%d\n", at_least_val(10, 5)); // < prints 10
```

```rust
fn at_least_val<T: Copy + PartialOrd>(val: T, res: T) -> T {
    if res < val {
        val
    } else {
        res
    }
}
```
