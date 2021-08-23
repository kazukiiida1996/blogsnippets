#include <stdio.h>
#include <stdint.h>

struct Animal {
    int32_t eyes;  // 4 byte
    double weight;  // 8 byte ... 4 + 8 = 12 byte はキリがわるい・・・
    char pad[4];  // パディング 4 byte
};

int main(void) {
    struct Animal animals[] = {
        {2, 32.1},
        {3, 32.2},
        {4, 32.3},
    };

    // 構造体の配列をファイルに出力
    FILE *fout = fopen("file.dat", "wb");
    if (!fout) {
        return 1;
    }

    fwrite(animals, sizeof(struct Animal), 3, fout);
    fclose(fout);

    // ファイルから構造体の配列を読み込む
    FILE *fin = fopen("file.dat", "rb");
    if (!fin) {
        return 1;
    }

    fread(animals, sizeof(struct Animal), 3, fin);
    fclose(fin);

    printf("%d %f\n", animals[0].eyes, animals[0].weight);
    printf("%d %f\n", animals[1].eyes, animals[1].weight);
    printf("%d %f\n", animals[2].eyes, animals[2].weight);

    return 0;
}
