int main(void) {
    void (*funcptr)(void) = 1234;

    funcptr();  // Segmentation fault

    return 0;
}
