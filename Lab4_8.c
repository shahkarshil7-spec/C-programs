#include <stdio.h>

int main() {
    int A[5], B[10] = {0};
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &A[i]);

    for (int i = 0; i < 5; i++)
        B[i * 2] = A[i];  // Copy to even indices: 0, 2, 4, 6, 8

    printf("Bination array:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", B[i]);
    return 0;
}