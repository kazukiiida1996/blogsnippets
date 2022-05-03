#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

/**
 * 引数のstrを破壊的に変更し、トークンを格納した動的な配列を返す
 * 
 * @param[in|out] str   分割対象文字列
 * @param[in]     seps  区切り文字
 * @return              動的配列（freeが必要）
 */
char **mystrtok(char *str, const char *seps) {
    if (!str || !seps) {
        return NULL;
    }

    // 文字列の長さを得る
    size_t len = strlen(str);

    // 動的配列を作る
    size_t capa = 2;
    size_t byte = sizeof(char *);
    size_t size = byte * capa + byte;  // +byteはNULL番兵分
    char **ary = malloc(size);  
    if (!ary) {
        return NULL;
    }
    memset(ary, 0, size);

    // 文字列の区切り文字を'\0'で埋める
    // つまり引数のstrを破壊的に変更する
    for (size_t i = 0; i < len; i += 1) {
        if (strchr(seps, str[i])) {
            str[i] = '\0';
        }
    }

    // 配列を伸縮するマクロ
#define resize() \
    capa *= 2; \
    size = byte * capa + byte; \
    char **tmp = realloc(ary, size); \
    if (!tmp) { \
        free(ary); \
        return NULL; \
    } \
    ary = tmp; \
    ary[capa] = NULL; \

    // ヘッドを見つけるマクロ
#define findhead() \
    head = NULL; \
    for (; i < len; i += 1) { \
        if (str[i]) { \
            head = &str[i]; \
            break; \
        } \
    } \

    char *head = NULL;  // 格納するトークンのヘッド
    size_t i = 0;
    size_t ary_len = 0;  // 配列aryの長さ

    // ヘッドを見つける
    findhead();

    // 配列にトークンを格納する
    for (; i < len; i += 1) {
        if (str[i]) {
            continue;
        }

        if (head) {
            if (ary_len >= capa) {
                // 配列の容量がいっぱいだったら配列を伸縮する
                resize();
            }

            ary[ary_len++] = head;  // トークンを格納
            ary[ary_len] = NULL;  // NULL番兵

            // ヘッドを見つける
            findhead();
            i -= 1;            
        }
    }

    if (head) {
        if (ary_len >= capa) {
            // 配列の容量がいっぱいだったら配列を伸縮する
            resize();
        }
        ary[ary_len++] = head;  // トークンを格納
        ary[ary_len] = NULL;  // NULL番兵
    }

    return ary;
}

int main(void) {
    char **toks;

    char str0[] = "cat dog  bird, pig";
    toks = mystrtok(str0, " ,");
    assert(toks);
    assert(strcmp(toks[0], "cat") == 0);
    assert(strcmp(toks[1], "dog") == 0);
    assert(strcmp(toks[2], "bird") == 0);
    assert(strcmp(toks[3], "pig") == 0);
    assert(toks[4] == NULL);
    free(toks);

    char str1[] = "  cat dog bird ";
    toks = mystrtok(str1, " ");
    assert(toks);
    assert(strcmp(toks[0], "cat") == 0);
    assert(strcmp(toks[1], "dog") == 0);
    assert(strcmp(toks[2], "bird") == 0);
    assert(toks[3] == NULL);
    free(toks);

    char str2[] = "     cat ,:dog :,   bird   aaa bbb ccc ddd eee";
    toks = mystrtok(str2, " ,:");
    assert(toks);
    assert(strcmp(toks[0], "cat") == 0);
    assert(strcmp(toks[1], "dog") == 0);
    assert(strcmp(toks[2], "bird") == 0);
    assert(strcmp(toks[3], "aaa") == 0);
    assert(strcmp(toks[4], "bbb") == 0);
    assert(strcmp(toks[5], "ccc") == 0);
    assert(strcmp(toks[6], "ddd") == 0);
    assert(strcmp(toks[7], "eee") == 0);
    assert(toks[8] == NULL);
    free(toks);

    char str3[] = "";
    toks = mystrtok(str3, " ");
    assert(toks);
    assert(toks[0] == NULL);
    free(toks);

    char str4[] = "  ";
    toks = mystrtok(str4, " ");
    assert(toks);
    assert(toks[0] == NULL);
    free(toks);

    char str5[] = "cat";
    toks = mystrtok(str5, " ");
    assert(toks);
    assert(strcmp(toks[0], "cat") == 0);
    assert(toks[1] == NULL);
    free(toks);

    char str6[] = " cat ";
    toks = mystrtok(str6, " ");
    assert(toks);
    assert(strcmp(toks[0], "cat") == 0);
    assert(toks[1] == NULL);
    free(toks);

    return 0;
}
