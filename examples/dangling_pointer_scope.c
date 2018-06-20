#include <stdio.h>

int main() {
    int val = 1;
    int *ptr = &val;

    printf("int value at location of pointer, in scope: %d\n", *ptr);

    {
        int twelve = 12;
        ptr = &twelve;
    }

    printf("twelve, but out of scope: %d\n", *ptr);
}
