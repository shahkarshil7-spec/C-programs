#include <stdio.h>

int main() {
    int a[11], pos, num;
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("Enter number to insert: ");
    scanf("%d", &num);
    printf("Enter position (0 to 10): ");
    scanf("%d", &pos);

    for (int i = 10; i > pos-1; i--)
        a[i] = a[i - 1];
    a[pos-1] = num;

    printf("Updated array:\n");
    for (int i = 0; i < 11; i++)
        printf("%d ", a[i]);

    return 0;
}