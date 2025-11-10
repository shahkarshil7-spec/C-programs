#include <stdio.h>

int main() {
    int arr[10], pos;
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (0-9): ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= 10) {
        printf("Invalid position.\n");
        return 1;
    }

    for (int i = pos-1; i < 9; i++)
        arr[i] = arr[i + 1];
    arr[9] = 0; //

    printf("Array after deletion:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}
