#include <stdio.h>

struct Animal {
    int eyes;
    double weight;
};

int main(void) {
    struct Animal animal = { 2, 54.3 };
    struct Animal *panimal = &animal;

    panimal->eyes = 4;
    panimal->weight = 123.4;

    printf("eyes[%d] weight[%f]\n", panimal->eyes, panimal->weight);
    // eyes[4] weight[123.400000]
    
    return 0;
}
