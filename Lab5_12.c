#include <stdio.h>

int main() {
    char str[200];
    int w;
    int a = 0, e = 0, i = 0, o = 0, u = 0;    
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(w = 0; str[w] != '\0'; w++) {
        char ch = str[w];
        if(ch == 'a' || ch == 'A')
            a++;
        else if(ch == 'e' || ch == 'E')
            e++;
        else if(ch == 'i' || ch == 'I')
            i++;
        else if(ch == 'o' || ch == 'O')
            o++;
        else if(ch == 'u' || ch == 'U')
            u++;
    }

    printf("\nFrequency of each vowel:\n");
    printf("A/a : %d\n", a);
    printf("E/e : %d\n", e);
    printf("I/i : %d\n", i);
    printf("O/o : %d\n", o);
    printf("U/u : %d\n", u);

    return 0;  
}
