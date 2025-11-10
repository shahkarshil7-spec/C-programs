#include<stdio.h>

int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    for (num ; num > 0; num /= 10)
    {

        printf("%d ", num % 10);
    if (num / 10 > 0)
        printf(", ");
    }
    return 0;
}
