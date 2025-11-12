#include <stdio.h>

void printEven(int num, int count, int n) {
    if (count <= n) {
        printf("%d ", num);
        printEven(num + 2, count + 1, n);
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printEven(2, 1, n);
    return 0;
}