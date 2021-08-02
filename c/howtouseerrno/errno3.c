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
bool check(int arg) {
    if (arg < 0) {
        errno = EINVAL;  // Invalid argument
    }
}

int main(void) {
    int val = -1;

    errno = 0;  // errnoの初期化
    check(val);
    if (errno != 0) {
        int save_errno = errno;  // errnoを保存する

        // check()が失敗したので↓でエラー処理をする
        // エラー内容を表示する
        printf("failed to check(). %s.\n", strerror(save_errno));

        // errnoの値によってエラー処理を分岐する
        switch (errno) {
        default:
            // サポートしていないerrno
            printf("unknown error.\n");
            break;
        case EINVAL:
            // ここで復帰処理を入れても良い
            printf("val (%d) is invalid argument.\n", val);
            break;
        }
    }

    return 0;
}

// failed to check(). Invalid argument.
// val (-1) is invalid argument.
