#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 16

int main() {
    puts("Enter your name!");
    char *buffer = malloc(BUF_SIZE);
    
    fgets(buffer, BUF_SIZE, stdin);
    printf("buffer: %s\n", buffer);
    free(buffer);

    fgets(buffer, BUF_SIZE, stdin);
    printf("buffer after free: %s\n", buffer);
}
