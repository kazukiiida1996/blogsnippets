/**
 * C言語のエラーハンドリング
 * errnoを使ったハンドリング方法
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <errno.h>

/**
 * argが0より低ければerrnoにEINVALをセットする
 */
void check(int arg) {
    if (arg < 0) {
        errno = EINVAL;  // Invalid argument
    }
}

int main(void) {
    errno = 0;  // errnoの初期化
    check(1);
    // エラーは発生しない
    if (errno != 0) {
        printf("FAIL.\n");
    }

    errno = 0;  // errnoの初期化
    check(-1);
    if (errno != 0) {
        // エラーが発生！
        int save_errno = errno;  // errnoを保存する

        // strerror()でerrnoを参照すると、エラー内容がわかる
        printf("FAIL. %s.\n", strerror(save_errno));
    }

    return 0;
}

// FAIL. Invalid argument.
