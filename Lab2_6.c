#include <stdio.h>

int main() 
{
    float s1, s2, s3, total, avg;
    printf("Enter marks in subject 1: ");
    scanf("%f", &s1);
    printf("Enter marks in subject 2: ");
    scanf("%f", &s2);
    printf("Enter marks in subject 3: ");
    scanf("%f", &s3);
    if(s1 < 35 || s2 < 35 || s3 < 35)
    {
        printf("Fail\n");
    }
    else
    {
        total = s1 + s2 + s3;
        avg = total / 3;
        printf("Total: %f\nAverage: %f\n", total, avg);
        {
            if(avg >= 70) printf("Distinction\n");
            else if(avg >= 60) printf("First\n");
            else if(avg >= 50) printf("Second\n");
            else if(avg >= 35) printf("Third Class\n");
        }
    }
    return 0;
}
