#include <stdio.h>

struct Animal {
    int eyes;
    double weight;
};

// 構造体のポインタを返す関数
struct Animal *func(struct Animal *panimal) {
    return panimal;
}

int main(void) {
    struct Animal animal = { 2, 54.3 };
    struct Animal *panimal = func(&animal);  // アドレス（ポインタ）を渡す
    return 0;
}
