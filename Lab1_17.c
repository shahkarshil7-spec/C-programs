#include <stdio.h>

int main() 
{
    float L;
    printf("Enter side length of square: ");
    scanf("%f", &L);
    printf("Area: %f\n", L * L);
    printf("Perimeter: %f\n", 4 * L);
    return 0;
}
