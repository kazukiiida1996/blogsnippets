#include <stdio.h>

#define numof(ary) (sizeof ary / sizeof ary[0])

int main(void) {
    int ary[] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int i = 0; i < numof(ary); i += 1) {
        sum += ary[i];
    }

    printf("sum = %d\n", sum);
    // sum = 15
    
    return 0;
}
