#include <stdio.h>

int main() 
{
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    printf("Temperature in Celsius is %f\n", 5.0/9.0 * (f - 32));
    return 0;
}
