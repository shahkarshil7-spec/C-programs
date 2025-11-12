#include <stdio.h>

int sumEven(int num, int count, int n) {
    if (count > n)
        return 0;
    return num + sumEven(num + 2, count + 1, n);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum = %d\n", sumEven(2, 1, n));
    return 0;
}