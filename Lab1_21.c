#include <stdio.h>

int main() 
{
    float gross, allowance, deduction, net;
    printf("enter the value of Gross: ");
    scanf("%f", &gross);
    {
        allowance = 0.10 * gross;
        deduction = 0.03 * gross;
        net = gross + allowance - deduction;
        printf("the net value is %f\n", net);
    }
    return 0;
}
