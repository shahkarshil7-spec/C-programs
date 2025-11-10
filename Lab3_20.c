#include<stdio.h>
int main()
{
    int i,sum=0;
    for (i=1;i<=100;i++)
    {
        if (i%3==0)
        {
            sum+=i;
        }
    }
    printf("Sum of multiples of 3 between 1 and 100 is: %d\n",sum);
    return 0;
}