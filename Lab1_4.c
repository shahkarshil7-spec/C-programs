#include <stdio.h>

int main() {
    float a, b, result;
    printf("enter the number a: ");
    scanf("%f", &a);
    printf("enter the number b: ");
    scanf("%f", &b);
    result = a / b;
    printf("%f\n", result);
    return 0;
}