struct Animal {
    int eyes;
    double weight;
};

int main(void) {
    struct Animal animal = {0};
    const struct Animal *panimal = &animal;  // animalのアドレスを代入

    panimal->eyes = 4;  // error!
    
    return 0;
}
