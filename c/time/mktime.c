#include <stdio.h>
#include <time.h>

int main(void) {
    struct tm tm = {
        .tm_sec = 1,    // 秒 (0-60)
        .tm_min = 2,    // 分 (0-59)
        .tm_hour = 3,   // 時間 (0-23)
        .tm_mday = 4,   // 月内の日付 (1-31)
        .tm_mon = 5,    // 月 (0-11)
        .tm_year = 2022 - 1900,   // 年 - 1900
        .tm_wday = 0,   // 曜日 (0-6, 日曜 = 0)
    };

    time_t t = mktime(&tm);  // 構造体を経過時間に変換
    printf("%ld\n", t);

    return 0;
}
