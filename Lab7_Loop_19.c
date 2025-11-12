#include <stdio.h>

void printDiv5(int n) {
    if (n > 100)
        return;
    if (n % 5 == 0)
        printf("%d ", n);
    printDiv5(n + 1);
}

int main() {
    printDiv5(1);
    return 0;
}