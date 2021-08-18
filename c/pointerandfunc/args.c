void f1(int *arg) {
}

void f2(const char *arg) {
}

void f3(int *arg1, double *arg2, const char *arg3) {
}

int main(void) {
    int a = 1;
    double b = 2.3;

    f1(&a);
    f2("hi");
    f3(&a, &b, "hi");
    
    return 0;
}