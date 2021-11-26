#include <stdio.h>

// 動物を表す構造体
struct Animal {
    int age;  // 年齢
    char name[40];  // 名前
};

// 引数animalは値渡しされる
void func(const struct Animal animal) {
    printf("age[%d] name[%s]\n", animal.age, animal.name);
    // age[20] name[Tama]
    // メンバの値が全てコピーされている
}

int main(void) {
    // 構造体変数animalを定義する
    struct Animal animal = { 20, "Tama" };

    // funcに値渡しでanimalを渡す
    func(animal);

    return 0;
}
