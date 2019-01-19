#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 16

int main() {
    char *buffer = malloc(BUF_SIZE);

    puts("Enter your name!");
    fgets(buffer, BUF_SIZE, stdin);

    printf("buffer: %s\n", buffer);
    free(buffer);

    fgets(buffer, BUF_SIZE, stdin);
    printf("buffer after free: %s\n", buffer);
}
