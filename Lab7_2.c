#include <stdio.h>

void lypr(int a)
{
    if (a%4 == 0)
    {
        printf("your entered year is Leap Year");
    }
    else
    {
        printf("your entered year is not a Leap Year");
    }
}   
    int main()
 {   {
        int a;
        printf("enter the year:");
        scanf("%d",&a);
        lypr(a);
    }
    return 0;
}