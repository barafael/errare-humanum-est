mod person;

impl person::Person {
    fn enter_black_hole(self) {
        println!("{} enters black hole!", self.name);
    }
}

fn main() {
    let person = person::Person::new(25, "Kiberius Tirk");

    println!("{:#?}", person);
    person.enter_black_hole();

    println!("{:#?}", person);
}