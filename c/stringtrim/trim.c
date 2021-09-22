#include <stdio.h>
#include <string.h>
#include <assert.h>

/**
 * 文字列sの部分文字列を切り取りdstに保存する
 * LICENSE: MIT
 * 
 * @param[out] dst   保存先バッファ
 * @param[in]  dstsz dstのサイズ
 * @param[in]  beg   切り取りの開始点
 * @param[in]  len   切り取りの長さ
 * @param[in]  s     対象の文字列
 *
 * @return dstのアドレス
 */
char *trim(char *dst, size_t dstsz, int beg, int len, const char *s) {
    // 引数のチェック
    if (!dst || !dstsz || beg < 0 || len < 0 || !s) {
        return NULL;
    }

    size_t slen = strlen(s);
    const char *b = s + beg;  // 切り取りの開始点
    const char *e = b + len;  // 切り取りの終了点
    const char *send = s + slen;  // 文字列の終了点
    size_t i;

    // ループを回してsの部分文字列を抽出する
    for (i = 0; i < dstsz - 1 && b < e && b < send; b += 1, i += 1) {
        dst[i] = *b;
    }

    dst[i] = '\0';  // ナル文字を保存

    return dst;
}

int main(void) {
    // 異常系テスト
    char dst[100];
    assert(trim(NULL, sizeof dst, 0, 3, "abcdef") == NULL);
    assert(trim(dst, 0, 0, 3, "abcdef") == NULL);
    assert(trim(dst, sizeof dst, -1, 3, "abcdef") == NULL);
    assert(trim(dst, sizeof dst, 0, -1, "abcdef") == NULL);
    assert(trim(dst, sizeof dst, 0, 3, NULL) == NULL);

    // 正常系テスト
    assert(!strcmp(trim(dst, sizeof dst, 0, 3, "abcdef"), "abc"));
    assert(!strcmp(trim(dst, sizeof dst, 3, 3, "abcdef"), "def"));
    assert(!strcmp(trim(dst, sizeof dst, 4, 10, "abcdef"), "ef"));
    assert(!strcmp(trim(dst, sizeof dst, 10, 3, "abcdef"), ""));
    assert(!strcmp(trim(dst, sizeof dst, 0, 6, "abcdef"), "abcdef"));
    assert(!strcmp(trim(dst, sizeof dst, 0, 0, ""), ""));
    assert(!strcmp(trim(dst, sizeof dst, 3, 0, "abcdef"), ""));

    char shrt[3];
    assert(!strcmp(trim(shrt, sizeof shrt, 0, 3, "abcdef"), "ab"));

    // 使用例
    char buf[100];
    const char *s = "abcdef";

    trim(buf, sizeof buf, 2, 3, s);  // 2文字目から3文字分切り出す
    printf("buf[%s]\n", buf);  // buf[cde]

    return 0;
}
