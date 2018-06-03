#include <stdio.h>

int *get_random_distance() {
    int d = 1356;
    return &d;
}

int *get_random_distance_static() {
    static int d = 1356;
    return &d;
}

int main() {
    int *d = get_random_distance();

    printf("Initiating jump of %d light years.\n", *d);
    return 0;
}
