#include <stdio.h>

void printName(int count) {
    if (count <= 5) {
        printf("Karshil Shah\n");
        printName(count + 1);
    }
}

int main() {
    printName(1);
    return 0;
}