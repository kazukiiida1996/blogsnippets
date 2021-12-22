#include <stdio.h>
#include <time.h>

int main(void) {
    time_t t = time(NULL);  // 経過時間を得る
    struct tm tm;
    char buf[100];
    
    // 経過時間をローカル時間に変換する
    localtime_r(&t, &tm);

    // 書式に従ってtm構造体を文字列に変換する
    strftime(buf, sizeof buf, "%Y-%m-%d (%a) %H:%M:%S", &tm);

    printf("%s\n", buf);

    return 0;
}
