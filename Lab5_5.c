#include <stdio.h>

int main() {
    char src[100], dest[100];
    printf("Enter a string: ");
    scanf("%s", src);

    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    printf("Copied string: %s\n", dest);
    return 0;
}
