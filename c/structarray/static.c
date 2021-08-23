#include <stdio.h>

struct Animal {
    int eyes;  // 目の数
    double weight;  // 体重
};

int main(void) {
    struct Animal cats[10];  // 構造体配列の宣言

    // 構造体配列の定義
    struct Animal dogs[] = {
        {2, 32.1},
        {3, 32.2},
        {4, 32.3},
    };

    printf("%d\n", dogs[0].eyes);  // 2
    printf("%f\n", dogs[0].weight);  // 32.100000

    struct Animal dog = dogs[1];  // コピー
    struct Animal *pdog = &dogs[2];  // アドレスをコピー

    dogs[0].eyes = 20;
    dogs[1].weight = 54.3;

    dogs[0] = dogs[1];
    dogs[0] = (struct Animal) { 8, 65.4 };

    // 指示初期化子の指定
    struct Animal birds[] = {
        { .eyes = 2, .weight = 32.1 },
        { .eyes = 3, .weight = 32.2 },
        { .eyes = 4, .weight = 32.3 },
    };

    struct Animal pigs[10] = {0};  // 配列を0クリア

    return 0;
}
