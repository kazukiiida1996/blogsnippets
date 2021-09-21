#include <stdio.h>
#include <string.h>

int main(void) {
    int ret = strncmp("Hello", "Hell", 4);  // 先頭4文字だけ比較
    printf("ret[%d]\n", ret);  // ret[0]

    ret = strncmp("Hige", "Hoge", 2);  // 先頭2文字だけ比較
    printf("ret[%d]\n", ret);  // ret[-6]

    ret = strncmp("Hige", "Hoge", 100);  // 先頭100文字だけ比較
    printf("ret[%d]\n", ret);  // ret[-6]

    ret = strncmp("Hige", "Hoge", -1);
    printf("ret[%d]\n", ret);  // ret[-6]
    return 0;
}
