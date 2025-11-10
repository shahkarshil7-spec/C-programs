#include <stdio.h>

int main() {
    int i, j;

    printf("The series is:\n");
    for (i = 1; i <= 3; i++) 
    {
        for (j = 1; j <= 3; j++) 
        {
            if(i<j)
                continue;
            printf("%d%d\n", i, j);
        }
    }

    printf("\n");
    return 0;
}