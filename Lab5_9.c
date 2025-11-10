#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str1[i] != '\0'; i++)
        if(str1[i] == '\n') str1[i] = '\0';
        
    for(i = 0; str2[i] != '\0'; i++)
        if(str2[i] == '\n') str2[i] = '\0';

    for(i = 0; str1[i] != '\0'; i++);

    for(j = 0; str2[j] != '\0'; j++) {
        str1[i] = str2[j];
        i++;
    }
     str1[i] = '\0'; 

    printf("Concatenated string: %s", str1);

    return 0;
}