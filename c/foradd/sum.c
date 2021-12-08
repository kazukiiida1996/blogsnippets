#include <stdio.h>

int main(void) {
    int sum = 0;

    for (int i = 1; i <= 10; i += 1) {
        sum += i;
    }

    printf("sum = %d\n", sum);
    // sum = 55

    return 0;
}
