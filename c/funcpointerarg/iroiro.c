#include <stdio.h>
#include <string.h>

// xとyを加算する関数
int add(int x, int y) {
    return x + y;
}

// keyに応じたvalueを文字列で返す関数
const char *get_value(const char *key) {
    if (!strcmp(key, "hige")) {
        return "bosabosa";
    } else {
        return "unknown";
    }
}

void f1(int (*callback)(int, int)) {
    int result = callback(1, 2);
    printf("result[%d]\n", result);  // result[3]
}

void f2(const char *(*callback)(const char *)) {
    const char *value = callback("hige");
    printf("value[%s]\n", value);  // value[bosabosa]
}

int main(void) {
    f1(add);
    f2(get_value);
    return 0;
}
