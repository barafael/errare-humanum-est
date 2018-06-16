mod person;

fn main() {
    let person = person::Person::new(25, "Kiberius Tirk");

    println!("{:#?}", person);

    // get a pointer into the person
    let name = &person.name;

    // cannot drop, person is borrowed in name
    std::mem::drop(person);
    println!("{} has been set free!\n", name);
}