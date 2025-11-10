#include <stdio.h>

int main() {
    int a, b, temp;
    printf("enter the numbers a and b: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: %d %d\n", a, b);
    return 0;
}
