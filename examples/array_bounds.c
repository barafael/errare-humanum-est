#include<stdio.h>

int main() {
    // Array bounds are not checked at runtime.
    // Out of bounds access might result in anything...
    int array[] = {1, 2, 3, 4, 5};

    for (int index = 0; index < 5 + 5; index++) {
        array[index] = 3;
        printf("%d ", array[index]);
    }
    return 0;
}
