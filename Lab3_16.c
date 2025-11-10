#include <stdio.h>

int main() 
{
    int numbers;
    int i, max, min;
    
    printf("Enter 100 integers:\n");
    for (i = 1; i <= 100; i++) 
    {
        printf("Number %d: ", i);
        scanf("%d", &numbers);
    }

    max = min = numbers;

    for (i = 1; i < 100; i++) 
    {
        if (numbers> max)
            max = numbers;
        if (numbers < min)
            min = numbers;
    }

    printf("Largest number: %d\n", max);
    printf("Smallest number: %d\n", min);

    return 0;
}