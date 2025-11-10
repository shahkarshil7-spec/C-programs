#include<stdio.h>

int main()
{
    int num,count=0;
    printf("enter a number: ");
    scanf("%d", &num);
    for(num;num/10!=0;num=num/10)
    {
        count++;
    }
    printf("The number of digits in the number is: %d",count+1);
    return 0;
}
