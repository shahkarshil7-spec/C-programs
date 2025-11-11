#include <stdio.h>

int main() {
    FILE *f;
    int roll;
    char name[50];
    char choice;

    f = fopen("file.csv", "w"); // CSV format for Excel
    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write header row
    fprintf(f, "Roll No,Name\n");

    do {
        printf("Enter Roll No: ");
        scanf("%d", &roll);
        printf("Enter Name: ");
        scanf(" %[^\n]", name); // Reads full name including spaces

        fprintf(f, "%d,%s\n", roll, name); // Write to CSV

        printf("Do you want to enter another record? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(f);
    printf("Records saved to file.csv. You can open it in Excel.\n");

    return 0;
}