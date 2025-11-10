#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter a value of n: \n");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        sum=sum+=i;
    }
    printf("The sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}