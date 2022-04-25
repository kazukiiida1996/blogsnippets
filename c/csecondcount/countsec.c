#include <stdio.h>
#include <time.h>

int main(void) {
    double count = 1;  // 秒数カウンター
    clock_t start = clock();

    for (;;) {
        clock_t end = clock();  // 経過時間を取得
        double sec = (double)(end - start) / CLOCKS_PER_SEC;  // 差分を秒数に変換

        // 経過秒数が現在のカウンター以上だったら
        if (sec >= count) {
            printf("%f秒経過\n", sec);  // 経過秒数を出力する
            count += 1;  // カウンターを増加する
        }
    }

    return 0;
}
