mod person;

fn main() {
    let person = person::Person::new(25, "Kiberius Tirk");

    println!("{:#?}", person);

    let name: &str = &person.name;

    std::mem::drop(person);
    println!("{} has been set free!\n", name);
}