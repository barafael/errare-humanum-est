#include <stdio.h>

int main() {
    // Reading and writing to a NULL pointer results in undefined behaviour.
    int *ptr = NULL;
    *ptr     = 10;
    printf("%d", *ptr);
}
