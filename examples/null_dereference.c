#include <stdio.h>

int main() {
    int *ptr = NULL;
    *ptr     = 10;
    printf("%d", *ptr);
    return 0;
}