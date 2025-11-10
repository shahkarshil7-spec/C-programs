#include <stdio.h>

int main(void) {
    char str[] = "hello.";
    size_t i;

    for (i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }

    printf("String in uppercase: %s\n", str);
    return 0;
}

