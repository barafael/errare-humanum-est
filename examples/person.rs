#[derive(Debug)]
pub struct Person {
    pub age: u16,
    pub name: String,
}

impl Person {
    pub fn new(age: u16, name: &str) -> Self {
        Person {
            age,
            name: name.into(),
        }
    }
}
