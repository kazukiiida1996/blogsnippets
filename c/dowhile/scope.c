int main(void) {
    int a = 1;
    do {
        int a = 2;  // 外のaとは別の変数になる
    } while (0);

    return 0;
}
