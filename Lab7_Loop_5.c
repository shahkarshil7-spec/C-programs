#include <stdio.h>

/* print first n odd numbers in ascending order using recursion */
void print_first_n_odd(int n) 
{
    if (n == 0)
        return;
    print_first_n_odd(n - 1);
    printf("%d ", 2 * n - 1);
}
int main(void) {
    int n;
    if (printf("Enter n: "), fflush(stdout), scanf("%d", &n) != 1) return 1;
    if (n <= 0) {
        printf("No numbers to print.\n");
        return 0;
    }
    print_first_n_odd(n);
    putchar('\n');
    return 0;
}