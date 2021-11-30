#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// 動物を表す構造体
struct Animal {
    int age;  // 年齢
    char name[40];  // 名前
};

// Animal用の比較関数
// lhs ... 比較するAnimalのポインタ
// rhs ... 比較するAnimalのポインタ
// 返り値 ... lhsとrhsが一致していればtrue, でなければfalse
bool animal_equal(const struct Animal *lhs, const struct Animal *rhs) {
    return lhs->age == rhs->age &&
           strcmp(lhs->name, rhs->name) == 0;
}

int main(void) {
    struct Animal cat = { 20, "Tama" };  // cat変数の定義
    struct Animal dog = cat;  // dogにcatをコピー

    // catとdogを比較
    if (animal_equal(&cat, &dog)) {
        puts("catとdogは等しいです。");
    }

    dog.age = 30;  // dogのデータを変更

    // catとdogを比較
    if (!animal_equal(&cat, &dog)) {
        puts("catとdogは等しくないです。");
    }

    return 0;
}
