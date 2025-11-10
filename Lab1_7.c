#include <stdio.h>

int main() 

{
    int minutes;
    printf("Enter time in minutes: ");
    scanf("%d", &minutes);
    printf("%f\n", minutes / 60.0);
    return 0;
}
