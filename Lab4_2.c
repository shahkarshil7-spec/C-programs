#include <stdio.h>

int main(void) {
    int a[10];

    for (int i = 1; i <= 10; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("You entered:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 4 || i == 7 || i == 9) {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}