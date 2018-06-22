#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 15

/* Compile with -fno-stack-protector */
int main() {
    // fgets is somewhat better than gets. But one can still use it wrong.
    // The fundamental problem is that array size is unknown.
    char buffer[BUFFER_SIZE - 5];
    int password = 0;

    printf("Enter password:\n");
    fgets(buffer, BUFFER_SIZE, stdin);

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
