#include <stdio.h>
#include <wchar.h>

int main(void) {
    const wchar_t *hw = L"Hello, World!";

    wprintf(L"%ls", hw);

    return 0;
}
