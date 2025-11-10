#include <stdio.h>

int main() {
    int i, j, count = 0, isPrime;

    for (i = 2; i <= 500; i++) {
        isPrime = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            count++;
        }
    }

    printf("Total prime numbers between 1 and 500: %d\n", count);
    return 0;
}