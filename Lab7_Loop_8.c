#include <stdio.h>

int sumOdd(int num, int count, int n) {
    if (count > n)
        return 0;
    return num + sumOdd(num + 2, count + 1, n);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum = %d\n", sumOdd(1, 1, n));
    return 0;
}