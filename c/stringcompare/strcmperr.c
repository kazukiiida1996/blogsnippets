#include <stdio.h>
#include <string.h>

int main(void) {
    int ret = strcmp("abc", NULL);
    printf("ret[%d]\n", ret);
    // Segmentation fault
    return 0;
}
