#include <stdio.h>
#include <string.h>

int main(void) {
    // 2つの文字列を比較
    int ret = strcmp("Hello", "Hello");
    printf("ret[%d]\n", ret);  // ret[0]

    // 一致していない文字列の比較
    ret = strcmp("Hello", "World");
    printf("ret[%d]\n", ret);  // ret[-1]

    ret = strcmp("World", "Hello");
    printf("ret[%d]\n", ret);  // ret[1]

    // if文とstrcmp()
    if (strcmp("Hello", "Hello") == 0) {
        puts("一致");  // 一致
    } else {
        puts("不一致")
    }

    // if文とstrcmp()と否定演算子
    if (!strcmp("Hello", "Hello")) {
        puts("一致");  // 一致
    } else {
        puts("不一致")
    }

    return 0;
}
