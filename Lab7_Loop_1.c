// Print 1st 10 natural nos using recursion
#include <stdio.h>

void print(int n) {
    if (n > 0) {
        print(n - 1);
        printf("%d ", n);
    }
}

int main() {
    print(10);
    return 0;
}