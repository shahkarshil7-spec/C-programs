#include <stdio.h>

int poww(int a , int b)
{
    int c=1;
    for(int i=1;i<=b;i++)
    {
        c*= a;
    }
    return c;
}
int main()
{
    int a,b;
  
    printf("enter the base and the exponent:");
    scanf("%d %d",&a,&b);
    printf("the result is %d",poww(a,b));
    return 0;
}