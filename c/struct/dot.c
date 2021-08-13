#include <stdio.h>

struct Animal {
    int age;
    double weight;
};

int main(void) {
    struct Animal cat = { 20, 30.3 };

    printf("age: %d\n", cat.age);  // 20
    printf("weight: %lf\n", cat.weight);  // 30.3

    cat.age = 30;
    printf("age: %d\n", cat.age);  // 30

    return 0;
}
