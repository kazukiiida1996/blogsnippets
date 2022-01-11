#include <stdio.h>

int main(void) {
    // double型の配列を定義
    double ary[] = {1, 2, 3};  

    // char型のポインタpに配列を代入
    // コンパイラによって警告が出力される
    // GCCでは「warning: initialization of ‘char *’ from incompatible pointer type ‘double *’」
    char *p = ary;

    return 0;
}
