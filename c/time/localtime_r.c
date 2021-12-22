#include <stdio.h>
#include <time.h>

int main(void) {
    const char *days[] = {"日", "月", "火", "水", "木", "金", "土"};
    time_t t = time(NULL);
    struct tm tm;
    localtime_r(&t, &tm);  

    printf("%04d年%02d月%02d日（%s）%02d時%02d分%02d秒\n",
        tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday,
        days[tm.tm_wday], tm.tm_hour, tm.tm_min, tm.tm_sec
    );
    return 0;
}
