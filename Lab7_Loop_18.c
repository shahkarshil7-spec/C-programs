#include <stdio.h>

void countGender(char sex[], int i, int *b, int *g) 
{
    if (i == 50)
        return;
    if (sex[i] == 'B' || sex[i] == 'b')
        (*b)++;
    else if (sex[i] == 'G' || sex[i] == 'g')
        (*g)++;
    countGender(sex, i + 1, b, g);
}

int main() {
    char sex[50];
    int i, b = 0, g = 0;

    printf("Enter sex code for 50 students (B/G):\n");
    for(i = 0; i < 50; i++) {
        printf("Student %d: ", i + 1);
        scanf(" %c", &sex[i]);
    }

    countGender(sex, 0, &b, &g);

    printf("Boys = %d\n", b);
    printf("Girls = %d\n", g);

    return 0;
}