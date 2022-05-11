#include <stdio.h>
#include <math.h>

int main(void) {
    // double型の絶対値を求める
    double a = fabs(-1.0);
    printf("%lf\n", a);  // 1.000000

    // float型の絶対値を求める
    float b = fabsf(-1.0f);
    printf("%f\n", b);  // 1.000000
    
    // long double型の絶対値を求める
    long double c = fabsl(-1.0);
    printf("%Lf\n", c);  // 1.000000

    return 0;
}
