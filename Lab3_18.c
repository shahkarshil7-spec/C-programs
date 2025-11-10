#include<stdio.h>

int main() {
    char gender;
    int boys = 0, girls = 0;

    printf("Enter gender code for 50 students (M/F):\n");

    for (int i = 1; i <= 50; i++) {
        printf("Student %d: ", i);
        scanf(" %c", &gender);  
        if (gender == 'M' || gender == 'm')
        {
            boys++;
        } 
        else if (gender == 'F' || gender == 'f') 
        {
            girls++;
        } else 
        {
            printf("Invalid input. Please enter M or F.\n");
            i--;
        }
    }

    printf("\nTotal Boys: %d\n", boys);
    printf("Total Girls: %d\n", girls);

    return 0;
}



