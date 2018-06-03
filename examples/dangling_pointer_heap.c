#include "Person.h"

int main() {
  Person *person = new_person(25, "Kiberius Tirk");

  print_person(person);

  char *name = person->name;

  free_person(person);

  printf("%s has been set free!\n", name);
  return 0;
}