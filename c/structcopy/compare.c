#include <stdio.h>
#include <string.h>
#include <time.h>

// 動物を表す構造体
struct Animal {
    int age;  // 年齢
    char name[3000];  // 名前
};

int main(void) {
    struct Animal cat = { 20, "Tama" };  // 構造体変数catを定義
    struct Animal dog;  // コピー先のdog変数
    const long n = 1000000000;  // 試行回数

    // memcpy()の処理速度の計測
    {
        clock_t start,end;
        start = clock();

        for (long i = 0; i < n; i += 1) {
            memcpy(&dog, &cat, sizeof(cat));
        }

        end = clock();

        printf("memcpy: %.2f秒かかりました\n", (double) (end - start) / CLOCKS_PER_SEC);
    }

    // memmove()の処理速度の計測
    {
        clock_t start,end;
        start = clock();
        
        for (long i = 0; i < n; i += 1) {
            memmove(&dog, &cat, sizeof(cat));
        }

        end = clock();

        printf("memmove: %.2f秒かかりました\n", (double) (end - start) / CLOCKS_PER_SEC);
    }

    return 0;
}
