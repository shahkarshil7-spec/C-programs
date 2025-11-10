#include <stdio.h>

int main() 
{
    int n, sum = 0;
    float mean;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int numbers;

    printf("Enter %d numbers:\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("Number %d: ", i);
        scanf("%d", &numbers);
        sum += numbers;
    }
    mean = sum / (float)n;

    printf("\nSum = %d\n", sum);
    printf("Mean = %.3f\n", mean);

    return 0;
}