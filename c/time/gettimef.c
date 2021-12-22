#include <stdio.h>
#include <time.h>

/**
 * 書式で現在時刻を取得する
 *
 * @param buf 保存先バッファ
 * @param bufsize バッファサイズ
 * @param fmt 書式
 * @return 成功したらバッファのバイト数、バイト数が足りなかったら0
 */
size_t gettimef(char *buf, size_t bufsize, const char *fmt) {
    time_t t = time(NULL);
    struct tm tm;
    localtime_r(&t, &tm);
    return strftime(buf, bufsize, fmt, &tm);
}

int main(void) {
    char buf[100];
    gettimef(buf, sizeof buf, "%Y-%m-%d");

    printf("%s\n", buf);
    // 2021-12-22

    return 0;
}
