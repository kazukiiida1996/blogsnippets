#include <stdio.h>

int add_int(int a, int b) {
    return a + b;
}

double add_double(double a, double b) {
    return a + b;
}

#define add(a, b) _Generic((a), \
    int: add_int, \
    double: add_double \
)(a, b) \

int main(void) {
    int i = add(1, 2);
    printf("%d\n", i);  // 3

    double d = add(1.2, 2.3);
    printf("%f\n", d);  // 3.500000

    return 0;
}
