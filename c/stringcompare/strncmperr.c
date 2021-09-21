#include <stdio.h>
#include <string.h>

int main(void) {
    int ret = strncmp(NULL, "abc", 4);  // 先頭4文字だけ比較
    printf("ret[%d]\n", ret);
    // Segmentation fault
    return 0;
}
