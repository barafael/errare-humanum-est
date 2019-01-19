#include "stdlib.h"
#include "stdio.h"

#define BUF_SIZE 10

int main() {
    int *array = malloc(BUF_SIZE * sizeof(int));
    for (size_t index = 0; index < BUF_SIZE; index++) {
        array[index] = index;
    }
    // Take a pointer into the heap-allocated array
    int *ptr = &array[6];

    // at this point, ptr becomes a dangling pointer
    free(array);

    // Even clang does not seem to detect this yet
    printf("%d's array has been set free!\n", *ptr);
    *ptr = 3;
    printf("array[6] was modified to %d after being free'd!\n", *ptr);
}
