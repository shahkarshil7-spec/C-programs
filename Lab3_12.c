#include <stdio.h>

int main()
{
     char name[35];
    int i, n;
     printf("Enter Your name: ");
      scanf("%s", name);
     printf("Enter the number of times you want to print your name: ");
      scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%s\n", name);
    }
    return 0;
}