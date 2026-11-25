#include <stdio.h>

int main() {
    int a[4][3] = {
        {8, 5, 9},
        {3, 7, 2},
        {6, 1, 4},
        {9, 8, 5}
    };

    for (int j = 0; j < 3; j++) {
        int min = a[0][j];

        for (int i = 1; i < 4; i++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }

        printf("%d-ustun min = %d\n", j + 1, min);
    }

    return 0;
}