#include <stdio.h>

int main(void) {
    int result;

    result = 10 % 2;
    printf("10 % 2 = %d\n", result);
    // 10 % 2 = 0

    result = 9 % 2;
    printf("9 % 2 = %d\n", result);
    // 9 % 2 = 1

    result = 14 % 3;
    printf("14 % 3 = %d\n", result);
    // 14 % 3 = 2

    result = 1234 % 23;
    printf("1234 % 23 = %d\n", result);
    // 1234 % 23 = 15

    return 0;
}
