struct Animal {
    int eyes;
    double weight;
};

int main(void) {
    int n = 10;
    n *= 2;
    struct Animal gorillas[n] = {0};
    // error: variable-sized object may not be initialized
    return 0;
}
