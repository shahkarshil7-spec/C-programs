#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == '\n')
            str[i] = '\0';
    }

    for(len = 0; str[len] != '\0'; len++);

    printf("\nReversed string vertically:\n");
    for(i = len - 1; i >= 0; i--) 
    {
        printf("%c\n", str[i]);
    }

   return 0;
}