#include <stdio.h>
#include <string.h>

// 動物を表す構造体
struct Animal {
    int age;  // 年齢
    char name[40];  // 名前
};

int main(void) {
    struct Animal cat = { 20, "Tama" };  // 構造体変数catを定義
    struct Animal dog;  // コピー先のdog変数

    // catをdogにコピーする
    memmove(&dog, &cat, sizeof(cat));

    // dogのメンバを出力
    printf("dog age[%d] name[%s]\n", dog.age, dog.name);
    // 出力結果↓
    // dog age[20] name[Tama]

    return 0;
}
