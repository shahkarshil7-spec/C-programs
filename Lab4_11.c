#include <stdio.h>

int main() {
    int a[10], b[10] = {0}, n, dir;
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("Enter shift count (n): ");
    scanf("%d", &n);
    printf("Enter direction (0=left, 1=right): ");
    scanf("%d", &dir);

    if (dir == 0) { // Left shift
        for (int i = 0; i < 10 - n; i++)
            b[i] = a[i + n];
    } else { // Right shift
        for (int i = 9; i >= n; i--)
            b[i] = a[i - n];
    }

    printf("Shifted array:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", b[i]);

    return 0;
}