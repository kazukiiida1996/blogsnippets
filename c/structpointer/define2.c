struct Animal {
    int eyes;
    double weight;
};

int main(void) {
    struct Animal animal = {0};
    struct Animal *panimal = &animal;  // animalのアドレスを代入
    return 0;
}
