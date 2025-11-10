#include<stdio.h>

int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    for(num; num>9; num=num/10)
    { if(num/10)
        printf("%d , ", num%10);

    }
printf("%d", num%10);
    return 0;
}
