#include <stdio.h>

int main() {
    int i, j;

    printf("The series is:\n");
    for (i = 1, j = 5; i <= 5; i++, j--) {
        printf("%d%d \n", i, j);
    }

    printf("\n");
    return 0;
}