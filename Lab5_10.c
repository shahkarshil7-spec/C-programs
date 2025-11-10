#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == '\n')
            str[i] = '\0';
    }

    printf("\nCharacters of the string vertically:\n");
    for(i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

return 0;
}