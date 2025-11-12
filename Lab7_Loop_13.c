#include <stdio.h>

int sumDiv13(int num) {
    if (num > 100)
        return 0;
    return num + sumDiv13(num + 13);
}

int main() {
    printf("Sum = %d\n", sumDiv13(13));
    return 0;
}