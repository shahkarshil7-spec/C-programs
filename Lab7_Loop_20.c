#include <stdio.h>

int sumDiv3(int num) {
    if (num > 100)
        return 0;
    return num + sumDiv3(num + 3);
}

int main() {
    printf("Sum = %d\n", sumDiv3(3));
    return 0;
}