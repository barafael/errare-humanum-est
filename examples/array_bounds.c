#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ARRAY_SIZE 15

int main() {
    int *array = malloc(ARRAY_SIZE * sizeof(int));

    /* Valgrind detects invalid write, but program worked as if array was larger */
    for (int index = 0; index < ARRAY_SIZE + 5; index++) {
        array[index] = 3;
        printf("%d ", array[index]);
    }
    return 0;
}
