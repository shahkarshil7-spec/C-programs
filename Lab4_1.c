#include<stdio.h>

int main() {
    int a[5];
    for(int i = 0; i < 4; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("You entered:\n");
    for(int i = 0; i < 4; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}