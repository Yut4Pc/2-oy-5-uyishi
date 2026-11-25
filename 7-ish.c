#include <stdio.h>

int main() {
    int a[4][4] = {
        {5, 12, 3, 8},
        {20, 7, 15, 4},
        {2, 25, 9, 11},
        {30, 6, 1, 40}
    };

    int max = a[0][0];
    int min = a[0][0];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }

            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("Farqi = %d", max - min);

    return 0;
}