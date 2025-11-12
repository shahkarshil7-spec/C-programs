#include <stdio.h>

void printPattern(int r, int c, int minr) {
    if (r < minr)
        return;
    printf("%d %d", r, c);
    if (!(r == minr && c == 2))
        printf("\n");
    if (c < 2)
        printPattern(r, c + 1, minr);
    else
        printPattern(r - 1, 1, minr);
}

int main() {
    printPattern(5, 1, 3);
    return 0;
}