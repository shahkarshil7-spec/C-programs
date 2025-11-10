#include <stdio.h>

struct student_data {
    int roll;
    char name[50];
    int phy, math, chem, total;
};

int main() {
    struct student_data s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);  

    printf("Enter marks in Physics, Maths, Chemistry: ");
    scanf("%d %d %d", &s.phy, &s.math, &s.chem);

    s.total = s.phy + s.math + s.chem;

    printf("\n--- Student Info ---\n");
    printf("Roll No: %d\nName: %s\nPhysics: %d\nMaths: %d\nChemistry: %d\nTotal: %d\n",
           s.roll, s.name, s.phy, s.math, s.chem, s.total);

    return 0;
}