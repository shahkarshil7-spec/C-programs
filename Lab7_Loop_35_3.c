#include <stdio.h>

void printTri(int i, int j, int k, int max) {
    if (i > max)
        return;
    printf("%d %d %d", i, j, k);
    if (!(i == max && j == max && k == max))
        printf("\n");
    if (k < max)
        printTri(i, j, k + 1, max);
    else if (j < max)
        printTri(i, j + 1, 1, max);
    else
        printTri(i + 1, 1, 1, max);
}

int main() {
    printTri(1, 1, 1, 2);
    return 0;
}