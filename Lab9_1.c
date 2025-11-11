#include <stdio.h>

int main() {
    FILE *f = fopen("example.txt", "r");
    if(f == NULL) {
        perror("File not found");
        return -1;
    }
    char ch;
    int lines = 0, words = 0, chars = 0, spaces = 0;

    while ((ch = fgetc(f)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (ch == ' ') spaces++;
        if (ch == ' ' || ch == '\n') words++;
    }

    fclose(f);

    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words + 1); // +1 for last word that doesn't end with space or newline
    printf("Characters: %d\n", chars);
    printf("Spaces: %d\n", spaces);

    return 0;
}