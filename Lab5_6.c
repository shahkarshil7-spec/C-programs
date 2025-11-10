    #include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, comp = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str1[i] != '\0'; i++)
        if(str1[i] == '\n') str1[i] = '\0';
    for(i = 0; str2[i] != '\0'; i++)
        if(str2[i] == '\n') str2[i] = '\0';

    i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            comp = str1[i] - str2[i];
            break;
        }
        i++;
    }

    if (comp == 0 && str1[i] == '\0' && str2[i] == '\0')
        printf("Both strings are same");
    else if (comp > 0)
        printf("First string is greater");
    else if (comp < 0)
        printf("Second string is greater");
    else if (str1[i] == '\0')
        printf("Second string is greater");
    else
        printf("First string is greater");

   return 0;
}
