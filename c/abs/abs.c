#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // int型の絶対値を求める
    int a = abs(-1);
    printf("%d\n", a);  // 1

    // long int型の絶対値を求める
    long int b = labs(-1);
    printf("%ld\n", b);  // 1

    // long long int型の絶対値を求める
    long long int c = llabs(-1);
    printf("%lld\n", c);  // 1

    return 0;
}
