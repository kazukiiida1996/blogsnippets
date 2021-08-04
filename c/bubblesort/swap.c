#include <stdio.h>

int main(void) {
    int a = 1, b = 2;

    // aとbの値をスワップする
    int tmp = a;
    a = b;
    b = tmp;

    printf("a[%d] b[%d]\n", a, b);
    // a[2] b[1]

    return 0;
}
