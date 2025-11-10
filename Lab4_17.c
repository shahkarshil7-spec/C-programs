#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    arr[9] = 0; 

    printf("Array after deleting last element:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}