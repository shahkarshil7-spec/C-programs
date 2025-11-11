#include <stdio.h>

int main() {
    FILE *f;
    char line[100];

    f = fopen("example.txt", "r"); 
    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("File content:\n");

    while (fgets(line, sizeof(line), f)) {
        printf("%s", line); // Print each line
    }

    fclose(f);
    return 0;
}