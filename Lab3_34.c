#include <stdio.h>

int main() {
    int n, first = 1, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            printf("1 ");
        } else {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    printf("\n");
    return 0;
}