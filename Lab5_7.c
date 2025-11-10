#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == '\n')
            str[i] = '\0';
    }

    for(length = 0; str[length] != '\0'; length++);

    // Reverse the string
    for(i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: %s", str);

    return 0;
}