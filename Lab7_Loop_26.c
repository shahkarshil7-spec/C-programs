#include <stdio.h>

int countDigits(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

int sumOfPowers(int n, int digits) {
    if (n == 0)
        return 0;
    int d = n % 10;
    return power(d, digits) + sumOfPowers(n / 10, digits);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int digits = countDigits(num);
    int sum = sumOfPowers(num, digits);

    if (sum == num)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}