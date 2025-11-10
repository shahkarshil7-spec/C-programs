#include <stdio.h>

int main() 
{
    int value;
    int sum = 0;
    float mean;

    printf("Enter 10 numbers:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("value %d: ", i);
        scanf("%d", &value);
        sum += value;
    }
    mean = sum / 10.0;

    printf("\nSum = %d\n", sum);
    printf("Mean = %.3f\n", mean);

    return 0;
}