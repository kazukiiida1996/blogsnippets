#include <stdio.h>

void func(int array[]) {
    printf("%ld\n", sizeof array);  // 8
}

int main(void) {
    int array[4];  // 16バイトの配列array
    func(array);  // arrayをfuncに渡す
    return 0;
}
