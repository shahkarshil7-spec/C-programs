#include <stdio.h>

int main()
{
     char name[35];
    int i;
     printf("Enter Your name: ");
      scanf("%s", name);
    for(i=1; i<=5; i++)
    {
        printf("%s\n", name);
    }
    return 0;
}