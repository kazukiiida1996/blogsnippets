#include <stdlib.h>

struct Animal {
    int eyes;  // 目の数
    double weight;  // 体重
};

int main(void) {
    // Animalの配列を10要素だけ確保
    struct Animal *animals = calloc(10, sizeof(struct Animal));

    // メモリの解放
    free(animals);
    return 0;
}
