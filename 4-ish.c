#include <stdio.h>

int main() {
    int a[3][4] = {
        {2, -5, 7, 0},
        {-3, 4, 6, -1},
        {8, 9, -2, 5}
    };

    for (int i = 0; i < 3; i++) {
        int count = 0;

        for (int j = 0; j < 4; j++) {
            if (a[i][j] > 0) {
                count++;
            }
        }

        printf("%d-qator musbat sonlar = %d\n", i + 1, count);
    }

    return 0;
}