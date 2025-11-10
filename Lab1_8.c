#include <stdio.h>

int main() 
{
    float dollars;
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);
    printf("Values in rupees is %f\n", dollars * 48);
    return 0;
}
