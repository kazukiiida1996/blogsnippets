#include "animal.h"

Animal *
Animal_Init(Animal *self, int age, double weight) {
    // 構造体の属性を初期化する
    self->age = age;
    self->weight = weight;
}

Animal *
Animal_New(int age, double weight) {
    // 動的メモリの確保を行う
    Animal *self = calloc(1, sizeof(*self));
    if (!self) {
        return NULL;
    }

    // 確保したメモリをイニシャライザで初期化する
    if (!Animal_Init(self, age, weight)) {
        free(self);
        return NULL;
    }

    return self;
}

void
Animal_Del(Animal *self) {
    if (!self) {
        return;
    }

    // 確保したメモリを解放する
    free(self);
}
