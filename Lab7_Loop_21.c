#include <stdio.h>

void separateDigits(int n) {
    if (n == 0)
        return;
    printf("%d", n % 10);
    if (n >= 10)
        printf(", ");
    separateDigits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    separateDigits(num);
    return 0;
}