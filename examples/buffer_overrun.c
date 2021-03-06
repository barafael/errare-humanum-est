#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 15

/* Compile with -fno-stack-protector */
int main() {
    // gets is a dangerous function and gcc even warns when using it.
    // Here, gets overwrites a part of the stack when a long text is entered on stdin,
    // corrupting a variable that comes after the input buffer on the stack.
    char buffer[BUFFER_SIZE];
    int password = 0;

    printf("Enter password:\n");
    gets(buffer);

    if (strcmp(buffer, "pass123") == 0) {
        printf("Correct password\n");
        password = 1;
    } else {
        printf("Wrong password\n");
    }
    if (password) {
        printf("Privileged access granted!!!\n");
    }
}
