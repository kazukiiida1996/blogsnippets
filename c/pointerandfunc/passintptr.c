void func(int *arg) {
}

int main(void) {
    int a = 1;
    int *p = &a;

    func(p);
    
    return 0;
}