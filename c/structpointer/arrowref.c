#include <stdio.h>

struct Animal {
    int eyes;
    double weight;
};

int main(void) {
    struct Animal animal = { 2, 54.3 };
    struct Animal *panimal = &animal;

    printf("eyes[%d] weight[%f]\n", panimal->eyes, panimal->weight);
    // eyes[2] weight[54.300000]
    
    return 0;
}
