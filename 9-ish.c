#include <stdio.h>

int main() {
    int a[4][4] = {
        {2, 5, 3, 2},
        {4, 2, 6, 7},
        {2, 9, 5, 1},
        {8, 3, 2, 5}
    };

    int n, count = 0;

    printf("Son kiriting: ");
    scanf("%d", &n);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] == n) {
                count++;
            }
        }
    }

    printf("%d soni %d marta uchradi", n, count);

    return 0;
}