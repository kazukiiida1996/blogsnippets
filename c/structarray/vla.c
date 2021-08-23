#include <stdio.h>

struct Animal {
    int eyes;
    double weight;
};

int main(void) {
    int n = 10;
    n *= 2;
    struct Animal gorillas[n];  // VLAで配列を宣言

    return 0;
}
