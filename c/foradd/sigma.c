#include <stdio.h>
    
int main(void) {
    double n = 100;

    // 1～100までの数列の和を求める
    double sum = 1.0 / 2.0 * n * (n + 1);

    printf("sum = %f\n", sum);
    // sum = 5050.000000

    return 0;
}
