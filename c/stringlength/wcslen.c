#include <stdio.h>
#include <wchar.h>

int main(void) {
    const wchar_t *ws = L"こんにちは";

    size_t len = wcslen(ws);

    printf("%d\n", len);  // 5
    return 0;
}
