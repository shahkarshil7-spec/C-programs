#include <stdio.h>

int isAutomorphic(int n, int sq) {
    if (n == 0)
        return 1;
    if (n % 10 != sq % 10)
        return 0;
    return isAutomorphic(n / 10, sq / 10);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sq = n * n;
    if (isAutomorphic(n, sq))
        printf("Automorphic number\n");
    else
        printf("Not an automorphic number\n");

    return 0;
}