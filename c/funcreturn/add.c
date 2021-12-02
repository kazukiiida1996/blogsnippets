#include <stdio.h>

// aとbを足し算してその結果を返す
int add(int a, int b) {
    return a + b;
}

int main(void) {
    // add()の計算結果をresultで受け取る
    int result = add(1, 2);

    // resultを出力する
    printf("result = %d\n", result);

    return 0;
}
