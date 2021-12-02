#include <stdio.h>

// 動物を表す構造体
struct Animal {
    int age;  // 年齢
    char name[40];  // 名前
};

// 構造体を定義して戻り値として返す関数
struct Animal create_animal(void) {
    struct Animal animal = { 20, "Tama" };
    return animal;
}

int main(void) {
    // create_animal()の戻り値をanimalで受け取る
    struct Animal animal = create_animal();

    // animalのメンバを出力
    printf("age[%d] name[%s]\n", animal.age, animal.name);
    return 0;
}
