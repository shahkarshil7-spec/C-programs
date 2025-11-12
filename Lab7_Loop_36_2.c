#include <stdio.h>

void printPairs(int a, int b) {
    if (a > 3)
        return;
    printf(" %d %d\n %d %d\n", a, b, a, b);
    if (a != 3)
    printPairs(a + 1, b - 1);
}

int main() {
    printPairs(1, 5);
    return 0;
}