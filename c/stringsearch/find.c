#include <stdio.h>
#include <string.h>

/**
 * textからtargetを検索する
 * 検索にヒットしたらポインタを返す
 * 検索にヒットしなかったらNULLポインタを返す
 *
 * @param text   検索対象の文字列
 * @param target 検索したい文字列
 * 
 * @return 見つかった位置のポインタ | NULL
 */
const char *find(const char *text, const char *target) {
    size_t tarlen = strlen(target);

    for (const char *p = text; *p; p += 1) {
        // 現在のポインタ位置からtargetの長さだけ比較する
        if (strncmp(p, target, tarlen) == 0) {
            return p;  // 見つかった
        }
    }

    return NULL;  // 見つからなかった
}

int main(void) {
    const char *s = "abcdefghi";
    const char *found;

    found = find(s, "abc");
    printf("%s\n", found);
    // abcdefghi

    found = find(s, "def");
    printf("%s\n", found);
    // defghi

    found = find(s, "ghi");
    printf("%s\n", found);
    // ghi

    found = find(s, "xyz");
    printf("%p\n", found);
    // (nil)

    return 0;
}
