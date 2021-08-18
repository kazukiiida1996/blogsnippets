#include <stdio.h>

struct Animal {
    int age;
    double weight;
};

void set_animal_params(struct Animal *animal, int age, double weight) {
    animal->age = age;
    animal->weight = weight;
}

int main(void) {
    struct Animal animal;

    set_animal_params(&animal, 20, 32.1);

    printf("%d %f\n", animal.age, animal.weight);  // 20 32.100000

    return 0;
}
