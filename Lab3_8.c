#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter a value of n: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        sum=sum+(2*i+1);
    }
    printf("The sum of first %d odd numbers is: %d\n", n, sum);
    return 0;
}