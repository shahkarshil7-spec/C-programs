#include <stdio.h>

int main() {
    int i, j, k;

    printf("The series is:\n");
    for (i = 1; i <= 2; i++) 
    {
        for (j = 1; j <= 2; j++) 
        {
            for(k = 1; k<=2;k++)
            printf("%d %d %d \n", i, j, k);
        }
    }

    printf("\n");
    return 0;
}