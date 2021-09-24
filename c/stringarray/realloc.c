#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // 配列を動的に確保する
    size_t capa = 3;  // 配列の要素数
    char **ary = calloc(capa, sizeof(char *));

    // 配列の各要素を動的に確保する
    for (size_t i = 0; i < capa; i += 1) {
        size_t elem_capa = 20;  // 文字配列の要素数
        ary[i] = calloc(elem_capa, sizeof(char));
        snprintf(ary[i], elem_capa, "Hello %d", i);
    }

    // 配列の要素数を増やす（伸縮）
    size_t new_capa = capa + 2;  // 新しい配列の要素数
    size_t byte = sizeof(char *);  // 要素1つのバイト数
    size_t size = new_capa * byte;  // 全体のバイト数
    ary = realloc(ary, size);  // メモリを伸縮する

    for (size_t i = capa; i < new_capa; i += 1) {
        size_t elem_capa = 20;
        ary[i] = calloc(elem_capa, sizeof(char));
        snprintf(ary[i], elem_capa, "Hello %d", i);
    }

    capa = new_capa;  // capaを伸縮後のnew_capaで更新

    // 出力と解放
    for (size_t i = 0; i < capa; i += 1) {
        printf("%s\n", ary[i]);  // 出力
        // Hello 0
        // Hello 1
        // Hello 2
        free(ary[i]);  // 要素のメモリの解放
    }
    free(ary);  // 配列のメモリの解放

    return 0;
}
