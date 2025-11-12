#include <stdio.h>

int findm(int arr[], int n, int m) {
    if (n == 100)
        return m;
    if (arr[n] > m)
        m = arr[n];
    return findm(arr, n + 1, m);
}

int findw(int arr[], int n, int w) {
    if (n == 100)
        return w;
    if (arr[n] < w)
        w = arr[n];
    return findw(arr, n + 1, w);
}

int main() {
    int arr[100], i;
    printf("Enter 100 numbers:\n");
    for(i = 0; i < 100; i++)
        scanf("%d", &arr[i]);

    int m = findm(arr, 0, arr[0]);
    int w = findw(arr, 0, arr[0]);

    printf("Largest = %d\n", m);
    printf("Smallest = %d\n", w);

    return 0;
}