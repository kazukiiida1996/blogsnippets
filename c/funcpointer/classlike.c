#include <stdio.h>

struct Animal {
    const char *name;
    void (*walk)(struct Animal *);
};

void animal_walk(struct Animal *animal) {
    printf("%s walking\n", animal->name);
}

int main(void) {
    struct Animal animal = {
        .name="Tama",
        .walk=animal_walk,
    };

    animal.walk(&animal);  // Tama walking

    return 0;
}
