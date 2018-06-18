#include <stdio.h>

int main() {
    int *ptr;
    *ptr = 1;

    printf("int at pointer: %d\n", *ptr);
    {
        int twelve = 12;
        ptr        = &twelve;
    }
    printf("%d\n", *ptr);
}
