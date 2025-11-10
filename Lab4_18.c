#include <stdio.h>

int main() {
    int arr[10], val, i, found = 0;
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to delete: ");
    scanf("%d", &val);

    for (i = 0; i < 10; i++) {
        if (arr[i] == val) {
            found = 1;
            break;
        }
    }

    if (found) {
        for (i=0; i < 9; i++)
            arr[i] = arr[i + 1];
            arr[9] = 0;
    } 
    else {
        printf("Value not found.\n");
    }

    printf("Array after deletion:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    return 0;
}