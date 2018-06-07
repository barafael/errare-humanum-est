#include "stdlib.h"
#include "string.h"
#include "stdio.h"

typedef struct {
  int age;
  char *name;
} Person;

Person *new_person(int age, char *name);
void free_person(Person *p);
void print_person(Person *p);
