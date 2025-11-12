#include <stdio.h>

void printPairs(int a, int b) {
    if (a > 5)
        return;
    printf("%d %d", a, b);
    if (a != 5)
        printf("\n");
    printPairs(a + 1, b - 1);
}

int main() {
    printPairs(1, 5);
    return 0;
}