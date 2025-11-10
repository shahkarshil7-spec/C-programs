#include <stdio.h>

int main() {
    int A[2][2], B[2][2], sum[2][2], diff[2][2], prod[2][2];
    int i, j, k;

    // Input matrices
    printf("Enter elements of Matrix A (2x2):\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B (2x2):\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &B[i][j]);

    // Addition and Subtraction
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            diff[i][j] = A[i][j] - B[i][j];
        }

    // Multiplication
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++) {
            prod[i][j] = 0;
            for (k = 0; k < 2; k++)
                prod[i][j] += A[i][k] * B[k][j];
        }

    // Output
    printf("\nSum:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    printf("\nDifference:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }

    printf("\nProduct:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", prod[i][j]);
        printf("\n");
    }

    return 0;
}