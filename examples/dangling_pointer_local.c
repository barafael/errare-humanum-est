#include <stdio.h>

// Obviously, returning a pointer to a stack-local variable does not work.
int *get_random_distance() {
    int d = 1356;
    return &d;
}

// A static variable is not really stack-local: it lives in static memory
int *get_random_distance_static() {
    static int d = 1356;
    return &d;
}

int main() {
    int *d = get_random_distance();

    printf("Initiating jump of %d light years.\n", *d);
    return 0;
}
