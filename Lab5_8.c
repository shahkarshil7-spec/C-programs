#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, comp = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == '\n')
            str[i] = '\0';
    }

    for(len = 0; str[len] != '\0'; len++);

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            comp = 1;
            break;
        }
    }

    if(comp == 0)
        printf("The string is a palindrome");
    else
        printf("The string is not a palindrome");

    return 0;
}   