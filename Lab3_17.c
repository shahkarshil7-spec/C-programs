#include <stdio.h>

int main() 
{
    int num, i;
    int pos = 0, neg = 0, zero = 0;

    printf("Enter 200 integers:\n");
    for (i = 0; i < 200; i++) 
    {
        scanf("%d", &num);
        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
    }

    printf("No of Positive integers: %d\n", pos);
    printf("No of Negative integers: %d\n", neg);
    printf("No of Zeros: %d\n", zero);

    return 0;
}