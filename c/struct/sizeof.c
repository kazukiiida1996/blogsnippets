#include <stdio.h>

struct Animal {
    int age;
    double weight;
};

int main(void) {
    struct Animal cat;

    printf("sizeof(struct Animal): %d byte\n", sizeof(struct Animal));
    printf("sizeof(cat): %d byte\n", sizeof(cat));

    return 0;
}
