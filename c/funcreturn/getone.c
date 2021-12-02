#include <stdio.h>

// 整数1を返す関数
int get_one(void) {
    return 1;
}

int main(void) {
    // get_one()を呼び出して戻り値resultを受け取る
    int result = get_one();

    // resultを出力する
    printf("result = %d\n", result);

    return 0;
}
