#include <stdio.h>

void printPattern(int r, int c, int mr) {
    if (r > mr)
        return;
    printf("%d %d", r, c);
    if (r != mr || c != r)
        printf("\n");
    if (c < r)
        printPattern(r, c + 1, mr);
    else
        printPattern(r + 1, 1, mr);
}

int main() {
    printPattern(1, 1, 3);
    return 0;
}