#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int choice = 0;
    while (1) {
        printf("Enter an integer number from 1 to 20 inclusive\n");
        if (scanf("%d", &choice) != 1) {
            break;
        }
        switch(choice) {
            case 0 ... 5:
                printf("Really low number\n");
                break;
            case 6 ... 15:
                printf("Thats better\n");
                break;
            case 16 ... 20:
                printf("Up there\n");
                break;
            default:
                printf("I said 0 to 20, inclusive!\n");
        }
    }

    return 0;
}
