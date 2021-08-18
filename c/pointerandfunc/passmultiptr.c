void func(int *a, double *b, const char *c) {
}

int main(void) {
    int a = 1;
    int *ap = &a;
    double b = 2.3;
    double *bp = &b;
    const char *c = "hi";

    func(ap, bp, c);

    return 0;
}