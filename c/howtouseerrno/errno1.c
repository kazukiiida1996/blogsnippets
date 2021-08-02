/**
 * C言語のエラーハンドリング
 * errnoを使ったハンドリング方法
 */
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(void) {
    // errnoの初期化とメッセージの取得方法
    errno = 0;  // errnoの初期化
    printf("%s.\n", strerror(errno));
    // No error

    return 0;
}
