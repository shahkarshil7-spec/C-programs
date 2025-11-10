#include <stdio.h>

int main() {
    int i, j;

    printf("The series is:\n");
    for (i = 5; i >= 3; i--) 
    {
        for (j = 1; j < 3; j++) 
        {
            printf("%d%d\n", i, j);
        }
    }

    printf("\n");
    return 0;
}