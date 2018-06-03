#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LARGE_BUFFER 512
#define SMALL_BUFFER ((LARGE_BUFFER/2) - 8)

int main() {
    char *buf1R1;
    char *buf2R1;
    char *buf2R2;
    char *buf3R2;

    buf1R1 = malloc(LARGE_BUFFER);
    buf2R1 = malloc(LARGE_BUFFER);
    free(buf2R1);

    buf2R2 = malloc(SMALL_BUFFER);
    buf3R2 = malloc(SMALL_BUFFER);

    char *str = "reallyreallyreallyreallyreallyreallyreallyreallyreallyreallyreallyreallyreallylong";
    strncpy(buf2R1, str, LARGE_BUFFER-1);
    printf("first:  %s\n", buf2R2);
    printf("second: %s\n", buf3R2);
    printf("actual: %s\n", buf2R1);
    free(buf1R1);
    free(buf2R2);
    free(buf3R2);
}