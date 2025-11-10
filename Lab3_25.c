#include <stdio.h>

int main() {
    int num, rev = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }

    // Check if the original and rev numbers are the same
    if (original == rev)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}