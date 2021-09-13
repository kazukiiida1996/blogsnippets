#include <stdio.h>
#include <string.h>

/**
 * textからtargetを検索する
 * 大文字と小文字を区別しない
 * 検索にヒットしたらポインタを返す
 * 検索にヒットしなかったらNULLポインタを返す
 *
 * @param text   検索対象の文字列
 * @param target 検索したい文字列
 * 
 * @return 見つかった位置のポインタ | NULL
 */
const char *findcase(const char *text, const char *target) {
    size_t tarlen = strlen(target);

    for (const char *p = text; *p; p += 1) {
        // 現在のポインタ位置からtargetの長さだけ比較する
        if (strncasecmp(p, target, tarlen) == 0) {
            return p;  // 見つかった
        }
    }

    return NULL;  // 見つからなかった
}

int main(void) {
    const char *s = "abcDEFghi";
    const char *found;

    found = findcase(s, "AbC");
    printf("%s\n", found);
    // abcDEFghi

    found = findcase(s, "def");
    printf("%s\n", found);
    // DEFghi

    found = findcase(s, "GHI");
    printf("%s\n", found);
    // ghi

    found = findcase(s, "xyz");
    printf("%p\n", found);
    // (nil)

    return 0;
}
