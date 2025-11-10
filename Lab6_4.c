#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int i;
    char *books[3];
    char temp[100];

    for (int i = 0; i < 3; i++) {
        printf("Enter name of book %d: ", i + 1);
        scanf(" %[^\n]", temp); 
        books[i] = (char*)malloc(strlen(temp) + 1); 
        strcpy(books[i], temp);
    
    }

    printf("\nBook names entered:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", books[i]);
        free(books[i]);
    }
    return 0;
}