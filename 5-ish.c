#include <stdio.h>

int main() {
    int a[4][4] = {
        {0, 2, 3, 0},
        {4, 0, 6, 7},
        {0, 9, 0, 1},
        {2, 3, 0, 5}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] == 0) {
                a[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}