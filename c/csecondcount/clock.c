#include <stdio.h>
#include <time.h>

int main(void) {
    clock_t time = clock();

    printf("秒数: %f\n", (double)time / CLOCKS_PER_SEC);
    // 秒数: 0.000831
    return 0;
}
