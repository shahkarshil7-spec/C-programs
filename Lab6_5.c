#include <stdio.h>
#include <string.h>

int main() {
    char name[100], *a;
    char *parts[10]; // max 10 name parts
    int count = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    // Split name into parts
    a = strtok(name, " ");
    while (a != NULL && count < 10) {
        parts[count++] = a;
        a = strtok(NULL, " ");
    }

    // Print abbreviated name
    for (int i = 0; i < count; i++) {
        if (i < count - 1)
            printf("%c. ", parts[i][0]); // First letter + dot
        else
            printf("%s", parts[i]);     // Last name in full
    }

    return 0;
}