#include <stdio.h>

int main() {
    int i, j, k;
    int i1 = 2, j1 = 2, i2 = 2, j2 = 2;

    int A[2][2];
    printf("Enter elements of matrix A[%d][%d]:\n", i1, j1);
    for (i = 0; i < i1; i++) {
        for (j = 0; j < j1; j++) {
            printf("A[%d][%d]: ", i, j);
            if (scanf("%d", &A[i][j]) != 1) A[i][j] = 0;
        }
    }

    int B[2][2];
    printf("Enter elements of matrix B[%d][%d]:\n", i2, j2);
    for (i = 0; i < i2; i++) {
        for (j = 0; j < j2; j++) {
            printf("B[%d][%d]: ", i, j);
            if (scanf("%d", &B[i][j]) != 1) B[i][j] = 0;
        }
    }

    int C[2][2];
    for (i = 0; i < i1; i++) {
        for (j = 0; j < j2; j++) {
            C[i][j] = 0;
        }
    }
    
    // Matrix multiplication
    for (i = 0; i < i1; i++) {
        for (j = 0; j < j2; j++) {
            for (k = 0; k < j1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (i = 0; i < i1; i++) {
        for (j = 0; j < j2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}