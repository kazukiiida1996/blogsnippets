#include <stdio.h>

enum Var {
    A,
    B = 10,
    C,
};

int main(void) {
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    return 0;
}
