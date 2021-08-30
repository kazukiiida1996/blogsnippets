#include <stdio.h>

struct Animal {
    int eyes;
    double weight;
};

// 構造体のポインタ変数を引数に取る関数
void func(struct Animal *panimal) {
    printf("eyes[%d]\n", panimal->eyes);
    printf("weight[%f]\n", panimal->weight);
}

int main(void) {
    struct Animal animal = { 2, 54.3 };

    func(&animal);  // アドレス（ポインタ）を渡す
    // eyes[2]
    // weight[54.300000]

    return 0;
}
