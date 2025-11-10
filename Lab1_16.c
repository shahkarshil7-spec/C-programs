#include <stdio.h>

int main() 
{
    float P, R, N;
    printf("\nEnter Principal money: ");
    scanf("%f", &P);
    printf("\nEnter Rate of Interest: ");
    scanf("%f", &R);
    printf("\nEnter Time in years: ");
    scanf("%f", &N);
    printf("Interest is %f\n", (P * R * N) / 100);
    return 0;
}
