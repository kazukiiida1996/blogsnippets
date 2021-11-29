#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 動物を表す構造体
struct Animal {
    int age;  // 年齢
    char *name;  // 名前（動的にメモリ確保される）
};

int main(void) {
    // cat変数を初期化する
    struct Animal cat;
    cat.age = 20;
    cat.name = malloc(sizeof(char) * 40);
    strcpy(cat.name, "Tama");

    struct Animal dog = cat;  // 代入してcatをdogにコピー

    // dogのメンバを出力
    printf("dog age[%d] name[%s]\n", dog.age, dog.name);
    // 出力結果↓
    // dog age[20] name[Tama]

    // catとdogのnameのアドレス値を比較
    printf("cat name address[%p]\n", cat.name);
    printf("dog name address[%p]\n", dog.name);
    // 出力結果↓
    // cat name address[0xb37010]
    // dog name address[0xb37010]

    free(cat.name);
    return 0;
}
