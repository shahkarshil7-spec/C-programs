#include <stdio.h>

int main() 
{
    float L, B;
    printf("Enter the length and breath: ");

    scanf("%f %f", &L, &B);
    printf("Area: %f\n", L * B);
    printf("Perimeter: %f\n", 2 * (L + B));
    return 0;
}
