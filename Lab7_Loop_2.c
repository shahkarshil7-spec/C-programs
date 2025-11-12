#include <stdio.h>

void printOdd(int n, int c) {
    if (c <= 10) {
        printf("%d ", n);
        printOdd(n + 2, c + 1);
    }
}

int main() {
    printOdd(1, 1);
    return 0;
}