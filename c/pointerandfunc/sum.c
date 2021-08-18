#include <stdio.h>

void sum(int *result, int beg, int end) {
    *result = 0;
    for (int i = beg; i <= end; i += 1) {
        *result += i;
    }
}

int main(void) {
    int result;
    
    sum(&result, 1, 10);

    printf("%d\n", result);  // 55

    return 0;
}
