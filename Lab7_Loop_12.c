#include <stdio.h>

void printName(int count, int n) {
    if (count <= n) {
        printf("KARSHIL SHAH\n");
        printName(count + 1, n);
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printName(1, n);
    return 0;
}