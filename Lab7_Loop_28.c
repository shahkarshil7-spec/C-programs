#include <stdio.h>

int sumFactors(int n, int i) {
    if (i > n / 2)
        return 0;
    if (n % i == 0)
        return i + sumFactors(n, i + 1);
    return sumFactors(n, i + 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = sumFactors(num, 1);
    if (sum == num)
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");

    return 0;
}