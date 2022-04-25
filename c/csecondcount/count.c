#include <stdio.h>
#include <time.h>

int main(void) {
    // カウントする秒数
    double total_sec = 10; 

    // 計測開始時間を取得する
    clock_t start = clock();

    for (;;) {
        // 経過時間を取得する
        clock_t end = clock();
        
        // 差分を取り秒数に変換する
        double sec = (double)(end - start) / CLOCKS_PER_SEC;

        if (sec >= total_sec) {
            break;
        }
    }

    printf("%f秒カウントしました。\n", total_sec);

    return 0;
}
