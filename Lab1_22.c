#include <stdio.h>

int main() 
{
    float gross, net;
    printf("enter the gross value: ");
    scanf("%f", &gross);
    net = gross - (0.10 * gross);
    printf("net value is %f\n", net);
    return 0;
}
