#include <stdio.h>

int main() 
{
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    
   printf("Temperature in Fahrenheit: %f\n", (9.0/5.0 * c) + 32);
    return 0;
}
