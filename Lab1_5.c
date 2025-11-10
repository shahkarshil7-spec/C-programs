#include <stdio.h>

int main() 
{
    float a, b;
    printf("enter the number a: ");
    scanf("%f", &a);
    printf("enter the number b: ");
    scanf("%f", &b);
    {
        printf("Addition: %f\n", a + b);
        printf("Subtraction: %f\n", a - b);
        printf("Multiplication: %f\n", a * b);
        printf("Division: %f\n", a / b);
    }
    return 0;
}
