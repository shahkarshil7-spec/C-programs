#include <stdio.h>

int main() {
    int a[10], n;
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    a[0] = 0;

    printf("1st position deleted array:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);

    return 0;
}