#include <stdio.h>

// 動物を表す構造体
struct Animal {
    int age;  // 年齢
    char name[40];  // 名前
};

// 配列を引数に取る
void func(struct Animal animals[]) {
    // animalsを出力
    printf("0: age[%d] name[%s]\n", animals[0].age, animals[0].name);
    printf("1: age[%d] name[%s]\n", animals[1].age, animals[1].name);
    printf("2: age[%d] name[%s]\n", animals[2].age, animals[2].name);
}

int main(void) {
    // 配列を定義する 
    struct Animal cats[] = {
        { 20, "Tama" },
        { 30, "Pochi" },
        { 40, "Yamada" },
    };

    // funcに配列を渡す
    func(cats);
    
    return 0;
}
