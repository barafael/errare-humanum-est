#include "Person.h"

Person *new_person(int age, char *name) {
  Person *p = malloc(sizeof(Person));
  p->age = age;
  p->name = malloc(strlen(name) * sizeof(char));
  strcpy(p->name, name);
  return p;
}

void free_person(Person *p) {
  free(p->name);
  free(p);
}

void print_person(Person *p) {
  printf("Name: %s\n", p->name);
  printf("Age: %d\n", p->age);
}
