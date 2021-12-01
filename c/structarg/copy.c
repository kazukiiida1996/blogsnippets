#include <stdio.h>

// 動物を表す構造体
struct Animal {
    int age;  // 年齢
    char name[40];  // 名前
};

// 引数のargには構造体がコピーされる
void func(struct Animal arg) {
    // argのメンバを出力
    printf("age[%d] name[%s]\n", arg.age, arg.name);
}

int main(void) {
    // cat変数を定義する
    struct Animal cat = { 20, "Tama" };

    // funcにcatをコピーして渡す（値渡し）
    func(cat);
    
    return 0;
}
