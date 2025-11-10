#include <stdio.h>

int main() {
    int mtr[4][4], a[16], i, j, k, temp;

    printf("Enter elements of 4x4 mtr:\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &mtr[i][j]);

    k = 0;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            a[k++] = mtr[i][j];

    for (i = 0; i < 15; i++) {
        for (j = i + 1; j < 16; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted elements:\n");
    for (i = 0; i < 16; i++)
        printf("%d ", a[i]);

    return 0;
}
