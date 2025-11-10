#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};

void printNames(struct Student s[], int n) {
    for (int i = 0; i < n; i++)
        printf("%s\n", s[i].name);
}

void printByRoll(struct Student s[], int n, int r) {
    for (int i = 0; i < n; i++) {
        if (s[i].roll == r) {
            printf("Roll: %d\nName: %s\nCourse: %s\nMajor: %s\nMinor: %s\n",
                   s[i].roll, s[i].name, s[i].course, s[i].major, s[i].minor);
            return;
        }
    }
    printf("Roll number not found\n");
}

int main() {
    struct Student s[10] = {
        {1, "Karshil", "btech", "Math", "Physics"},
        {2, "Ayush", "btech", "Computer", "IKS"},
        {3, "Aryan", "btech", "EVS", "UHV"},
        {4, "Hard", "btech", "Electrical", "BCVS"},
        {5, "Laksh", "btech", "CS", "Mathematics"},
        {6, "Arya", "btech", "Physics", "Chemistry"},
        {7, "Jay", "btech", "English", "Yoga"},
        {8, "Jeet", "btech", "Applied physics", "Statistics"},
        {9, "Preet", "btech", "IKS", "Calculus"},
        {10, "Daiwik", "btech", "DSA", "Algebra"}
    };

    printf("All student names:\n");
    printNames(s, 10);

    int roll;
    printf("\nEnter roll number to search: ");
    scanf("%d", &roll);
    printByRoll(s, 10, roll);

    return 0;
}