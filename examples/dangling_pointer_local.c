#include <stdio.h>

// Obviously, returning a pointer to a stack-local variable does not work.
int *get_reference() {
    int d = 1356;
    return &d;
}

// A static variable is not really stack-local: it lives in static memory
int *get_reference_static() {
    static int d = 1356;
    return &d;
}

int main() {
    int *d = get_reference();
    printf("Reference from local stack frame contains: %d", *d);
}
