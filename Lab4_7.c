#include <stdio.h>

int main() {
    int a[4][4], t[4][4];
    printf("Enter 4x4 matrix:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            t[j][i] = a[i][j];

    printf("Transpose:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
    return 0;
}