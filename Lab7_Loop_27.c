#include <stdio.h>

void printFactors(int n, int i) {
    if (i > n)
        return;
    if (n % i == 0)
        printf("%d ", i);
    printFactors(n, i + 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors: ");
    printFactors(num, 1);
    return 0;
}