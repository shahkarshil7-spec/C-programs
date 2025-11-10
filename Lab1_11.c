#include <stdio.h>

int main() 
{
    float grams;
    printf("weight in grams: ");
    scanf("%f", &grams);
    printf("Weight in kilograms is %f\n", grams / 1000);
    return 0;
}
