#include <stdio.h>

void printPairs(int r, int c, int mr, int mc) {
    if (r > mr)
        return;
    printf("%d %d", r, c);
    if (r != mr || c != mc)
        printf("\n");
    if (c < mc)
        printPairs(r, c + 1, mr, mc);
    else
        printPairs(r + 1, 1, mr, mc);
}

int main() {
    printPairs(1, 1, 2, 3);
    return 0;
}