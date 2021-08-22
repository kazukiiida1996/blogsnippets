#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
    int32_t *array;  // 配列本体のポインタ
    int32_t capa;  // 配列の要素数（上限数）
    int32_t len;  // 配列の現在の長さ
} DynamicIntArray;

DynamicIntArray *
DynamicIntArray_New(void) {
    // 構造体自身のメモリを確保
    DynamicIntArray *self = calloc(1, sizeof(*self));
    if (!self) {
        return NULL;
    }

    // 配列のメモリを初期値で確保
    self->capa = 2;  // 初期容量（テストのため少なめに設定）
    self->array = calloc(self->capa, sizeof(int));
    if (!self->array) {
        free(self);
        return NULL;
    }

    return self;
}

void
DynamicIntArray_Del(DynamicIntArray *self) {
    if (!self) {
        return;
    }

    free(self->array);  // 配列のメモリ解放
    free(self);  // 構造体のメモリ解放
}

DynamicIntArray *
DynamicIntArray_Resize(DynamicIntArray *self, int32_t capa) {
    int32_t byte = sizeof(int);  // 要素1つのサイズ（バイト）
    int32_t size = capa * byte;  // 配列全体のサイズ（バイト）
    int *tmp = realloc(self->array, size);  // メモリを再確保
    if (!tmp) {
        return NULL;
    }

    self->array = tmp;  // 再確保に成功したらポインタを保存する
    self->capa = capa;  // リサイズ後の容量に更新する

    return self;
}

DynamicIntArray *
DynamicIntArray_PushBack(DynamicIntArray *self, int32_t elem) {
    // プッシュ前に配列のリサイズを行う
    // 現在の配列の長さが容量以上だったらリサイズ
    if (self->len >= self->capa) {
        if (!DynamicIntArray_Resize(self, self->capa * 2)) {
            return NULL;
        }
    }

    self->array[self->len++] = elem;  // 要素を配列に保存

    return self;
}

void
DynamicIntArray_Show(const DynamicIntArray *self) {
    for (int32_t i = 0; i < self->len; i += 1) {
        printf("array[%d] = %d\n", i, self->array[i]);
    }
}

int
main(void) {
    DynamicIntArray *ary = DynamicIntArray_New();

    DynamicIntArray_PushBack(ary, 10);
    DynamicIntArray_PushBack(ary, 20);
    DynamicIntArray_PushBack(ary, 30);
    DynamicIntArray_PushBack(ary, 40);
    DynamicIntArray_PushBack(ary, 50);
    DynamicIntArray_PushBack(ary, 60);

    DynamicIntArray_Show(ary);

    DynamicIntArray_Del(ary);
    return 0;
}
