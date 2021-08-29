#include <stdio.h>
#include <stdarg.h>

void func0(void) {
    // ここに色々な処理
}

void func1(int arg1) {
    // ここに色々な処理
}

void func2(int arg1, float arg2) {
    // ここに色々な処理
}

void funcstr(const char *str) {
    // ここに色々な処理
}

void funcarray(int ary[]) {
    // ここに色々な処理
}

void funcptr(int *ptr) {
    // ここに色々な処理
}

void print(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    vprintf(fmt, ap);
    va_end(ap);
}

int main(void) {
    func0();
    func1(123);
    func2(123, 3.21);
    funcstr("Hello, World!");

    int ary[] = {1, 2, 3};
    funcarray(ary);

    int i = 0;
    funcptr(&i);

    print("Hello, %s!\n", "World");
    // Hello, World!
    return 0;
}
