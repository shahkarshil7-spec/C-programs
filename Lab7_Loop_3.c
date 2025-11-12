#include <stdio.h>

void printEven(int n, int c) {
    if (c <= 10) {
        printf("%d ", n);
        printEven(n + 2, c + 1);
    }
}

int main() {
    printEven(2, 1);
    return 0;
}