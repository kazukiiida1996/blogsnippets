#include <stdio.h>
#include <time.h>

int main(void) {
    time_t t = time(NULL);  // エポック時間からの経過時間を取得

    printf("t: %ld\n", t);  // 秒数を出力
    printf("sizeof time_t: %ld\n", sizeof(time_t));  // time_tのバイト数を出力

    return 0;
}
