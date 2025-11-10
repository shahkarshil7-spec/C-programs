#include <stdio.h>

int main() 
{
    float H, L;
    printf("enter the value of H: ");
    scanf("%f", &H);
    printf("enter the value of L: ");
    scanf("%f", &L);
    printf("Area of triangle is %f\n", (H * L) / 2);
    return 0;
}
