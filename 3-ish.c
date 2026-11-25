#include <stdio.h>

int main() {
    int a[4][4] = {
        {5, 10, 3, 8},
        {15, 7, 20, 4},
        {2, 25, 9, 11},
        {30, 6, 12, 40}
    };

    int count = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] % 5 == 0) {
                printf("%d ", a[i][j]);
                count++;
            }
        }
    }

    printf("\nSoni = %d", count);

    return 0;
}