#include <stdio.h>

void count(int arr[], int index, int *p, int *n, int *zero) {
    if (index == 200)
        return;
    if (arr[index] > 0)
        (*p)++;
    else if (arr[index] < 0)
        (*n)++;
    else
        (*zero)++;
    count(arr, index + 1, p, n, zero);
}

int main() {
    int arr[200], i;
    int p = 0, n = 0, zero = 0;

    printf("Enter 200 integers:\n");
    for(i = 0; i < 200; i++)
        scanf("%d", &arr[i]);

    count(arr, 0, &p, &n, &zero);

    printf("positive: %d\n", p);
    printf("negative: %d\n", n);
    printf("Zero: %d\n", zero);

    return 0;
}