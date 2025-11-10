#include <stdio.h>

int main() {
    int a[11], n;
    printf("Enter 10 elements:\n");
    for (int i = 1; i <= 10; i++)
        scanf("%d", &a[i]);

    printf("Enter new number to insert at beginning: ");
    scanf("%d", &n);
    a[0] = n;

    printf("Updated array:\n");
    for (int i = 0; i <= 10; i++)
        printf("%d ", a[i]);

    return 0;
}