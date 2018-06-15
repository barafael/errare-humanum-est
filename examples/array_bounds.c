#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE 15
#define OVERRUN_BYTES 10

int main() {
    int *array = malloc(ARRAY_SIZE * sizeof(int));

    /* Valgrind detects invalid write, but program worked as if array was larger */
    for (int index = 0; index < ARRAY_SIZE + OVERRUN_BYTES; index++) {
        array[index] = 3;
        printf("%d ", array[index]);
    }
    return 0;
}
