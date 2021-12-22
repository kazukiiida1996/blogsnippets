#include <stdio.h>
#include <time.h>

int main(void) {
    time_t t = time(NULL);  // POSIX時間からの経過時間を取得
    const char *s = ctime(&t);  // 時刻を文字列に変換
    printf("%s\n", s);  // 文字列を出力
    return 0;
}
