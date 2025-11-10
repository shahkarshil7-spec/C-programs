#include <stdio.h>

int main() 
{
    int a, b, c, largest, smallest;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the Third number:");
    scanf("%d", &c);
    largest = a;
   {
        if(b > largest) largest = b;
        if(c > largest) largest = c;
    smallest = a;
        if(b < smallest) smallest = b;
        if(c < smallest) smallest = c;
    printf("Largest: %d\nSmallest: %d\n", largest, smallest);
   }
    return 0;
} 