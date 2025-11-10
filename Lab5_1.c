#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    printf("Enter a string: ");
    if (!fgets(str, sizeof str, stdin)) return 1;

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[--len] = '\0';
    }
    printf("Length of the string is: %zu\n", len);
    return 0;
}