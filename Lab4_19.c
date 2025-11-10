// 19. Search a value within an array.
#include <stdio.h>

int main() {
    int arr[10], val, i, found = 0;
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to search: ");
    scanf("%d", &val);

    for (i = 0; i < 10; i++) {
        if (arr[i] == val) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Value found at position %d\n", i + 1);
    else
        printf("Value not found.\n");

    return 0;
}