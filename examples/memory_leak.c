#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 15

int main() {
    // never free'd
    char *buffer = malloc(BUFFER_SIZE * sizeof(char));

    printf("Enter password:\n");
    fgets(buffer, BUFFER_SIZE, stdin);

    if (strcmp(buffer, "pass123")) {
        printf("Wrong password\n");
    } else {
        printf("Correct password\n");
    }
}
