#include <stdio.h>

int main() {
    int a[3][3] = {
        {2, 5, 3},
        {10, 4, 6},
        {7, 8, 9}
    };

    int maxSum = 0;
    int maxRow = 0;

    for (int i = 0; i < 3; i++) {
        int sum = 0;

        for (int j = 0; j < 3; j++) {
            sum = sum + a[i][j];
        }

        printf("%d-qator yigindisi = %d\n", i + 1, sum);

        if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }

    printf("Eng katta yigindi = %d\n", maxSum);
    printf("Qator = %d", maxRow + 1);

    return 0;
}