#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Animal {
    int age;
    char *name;
};

// ディープコピーを行う関数
void deepcopy(struct Animal *dst, struct Animal *src) {
    // 年齢のコピー
    dst->age = src->age;

    // 名前のコピー
    size_t byte = sizeof(char);
    size_t size = byte * strlen(src->name) + byte;
    dst->name = malloc(size);  // エラー処理は省略
    strcpy(dst->name, src->name);
}

int main(void) {
    // catの初期化
    struct Animal cat;
    cat.age = 20;
    cat.name = malloc(sizeof(char) * 40);  // エラー処理は省略
    strcpy(cat.name, "Tama");

    // dogにcatをコピー
    struct Animal dog;
    deepcopy(&dog, &cat);

    // dogのメンバを出力
    printf("dog age[%d] name[%s]\n", dog.age, dog.name);

    // メモリを解放
    free(cat.name);
    free(dog.name);
    return 0;
}
