#include "cat.h"

Cat *
Cat_Init(Cat *self, int age, double weight, int legs) {
    // selfをAnimalにアップキャストしてAnimalのイニシャライザを呼び出す
    // Catの構造体の先頭ではAnimal構造体の変数が置かれているため、
    // このようにアップキャストすることでAnimal構造体のように扱うことが出来ます
    // ここが継承した構造体の初期化に関しての中核部分です
    if (!Animal_Init((Animal *) self, age, weight)) {
        return NULL;
    }

    // Cat独自の属性はここで初期化する
    self->legs = legs;

    return self;
}

Cat *
Cat_New(int age, double weight, int legs) {
    // 動的メモリの確保を行う
    Cat *self = calloc(1, sizeof(*self));
    if (!self) {
        return NULL;
    }

    // 確保したメモリをイニシャライザで初期化する
    if (!Cat_Init(self, age, weight, legs)) {
        free(self);
        return NULL;
    }

    return self;
}

void
Cat_Del(Cat *self) {
    if (!self) {
        return;
    }

    // 確保したメモリを解放する
    free(self);
}
