#include <stdio.h>

int main() {
    int matrix[3][3];
    int *ptr = &matrix[0][0];
    int i, j;

    // Input 3x3 matrix
    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", (ptr + i * 3 + j));

  
    int min = *ptr;
    int max = *ptr;

    for (i = 0; i < 9; i++) {
        if (*(ptr + i) < min)
            min = *(ptr + i);
        if (*(ptr + i) > max)
            max = *(ptr + i);
    }

    // Output
    printf("\nSmallest number: %d\n", min);
    printf("Largest number: %d\n", max);

    return 0;
}