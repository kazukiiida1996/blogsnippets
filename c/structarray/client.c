// 顧客を表す構造体
struct Client {
    long id;  // ID
    char name[100];  // 名前
    int sex;  // 性別
};

int main(void) {
    // 顧客の初期データ
    struct Client clients[] = {
        {1, "匿名太郎", 0},
        {2, "匿名花子", 1},
        {3, "匿名ジョリーン", 2},
    };

    return 0;
}