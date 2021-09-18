int main(void) {
    const int ary[3];
    ary[0] = 10;
    // GCC: error: assignment of read-only location ‘ary[0]’
    return 0;
}
