#include <stdio.h>
#include <string.h> // Needed for strcmp()

int main() {
    FILE *f;
    char line[100];

    f = fopen("example.txt", "w"); // Creates or overwrites example.txt
    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a line (type 'exit' to stop):\n");

    while (1) {
        fgets(line, sizeof(line), stdin); // Safe alternative to gets()

        // Remove newline character if present
        line[strcspn(line, "\n")] = '\0';

        if (strcmp(line, "exit") == 0)
            break;

        fputs(line, f);
        fputs("\n", f);
    }

    fclose(f);
    printf("Lines saved to example.txt\n");

    return 0;
}