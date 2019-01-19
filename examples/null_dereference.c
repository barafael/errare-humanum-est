#include <stdio.h>

int main() {
    // Dereferencing a NULL pointer results in undefined behaviour.
    int *ptr = NULL;
    *ptr     = 10;
    printf("%d", *ptr);
}
