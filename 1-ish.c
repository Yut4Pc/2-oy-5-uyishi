#include <stdio.h>

int main() {
    int a[3][4] = {
        {5, 8, 2, 4},
        {7, 3, 9, 1},
        {6, 12, 4, 10}
    };

    for (int i = 0; i < 3; i++) {
        int max = a[i][0];

        for (int j = 1; j < 4; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }

        printf("%d-qator max = %d\n", i + 1, max);
    }

    return 0;
}