#include <stdio.h>

int main() {
    int num, square, temp, digits = 0, mod = 1, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    for (i = 0; i < digits; i++) {
        mod *= 10;
    }

    if (square % mod == num)
        printf("%d is an Automorphic number.\n", num);
    else
        printf("%d is not an Automorphic number.\n", num);

    return 0;
}