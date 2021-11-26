#include <stdio.h>

// 動物を表す構造体
struct Animal {
    int age;  // 年齢
    char name[40];  // 名前
};

// 返り値の型がstruct Animalな関数func
struct Animal func(void) {
    struct Animal animal = { 20, "Tama" };
    return animal;  // 値渡しで返す
}

int main(void) {
    // funcの返り値を構造体変数で受け取る
    struct Animal animal = func();
    
    printf("age[%d] name[%s]\n", animal.age, animal.name);
    // age[20] name[Tama]

    return 0;
}
