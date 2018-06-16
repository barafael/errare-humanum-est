#include "person.h"

int main() {
    Person *person = new_person(25, "Kiberius Tirk");

    print_person(person);

    // Create a pointer into the heap-allocated person struct
    char *name = person->name;

    // at this point, name becomes a dangling pointer
    free_person(person);

    printf("%s has been set free!\n", name);
    return 0;
}