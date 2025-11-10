#include <stdio.h>

int main() {
    char str[] = "HELLO";
    int i;

   
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; 
        }
    }

    printf("String in lowercase: %s", str);
    return 0;
}
