#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 15

int main(void) {
    char buffer[BUFFER_SIZE];
    int password = 0;

    printf("Enter password:\n");
    gets(buffer);

    if(strcmp(buffer, "pass123")) {
        printf("Wrong password\n");
    } else {
        printf("Correct password\n");
        password = 1;
    }

    if(password) {
        printf ("Privileged access granted!!!\n");
    }
    return 0;
}