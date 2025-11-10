#include <stdio.h>

int main() 
{
    float dollars;
    printf("Enter value in dollars: ");
    scanf("%f", &dollars);
    printf("Value in pounds is %f\n", (dollars * 48) / 70);
    return 0;
}
