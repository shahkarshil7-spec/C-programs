#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[50];
    int age, matches;
    float avg;
};

int main() {
    struct Cricketer c[10] = {
        {"Sachin Tendulkar", 52, 200, 53.78},
        {"Virat Kohli", 37, 123, 46.8},
        {"M S Dhoni", 41, 90, 38.1},
        {"Rohit Sharma", 38, 67, 40.6},
        {"Rahul Dravid", 52, 164, 52.3},
        {"Kapil Dev", 66, 131, 31.6},
        {"Sunil Gavaskar", 54, 100, 51.1},
        {"Virendra Sehwag", 47, 104, 49.34},
        {"Cheteshwar Pujara", 37, 103, 43.6},
        {"VVS Lakshman", 51, 134, 46.0}
    };

    // Simple bubble sort by avg
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (c[i].avg > c[j].avg) {
                struct Cricketer temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("Sorted by average runs:\n");
    for (int i = 0; i < 10; i++)
        printf("%s, Age: %d, Matches: %d, Avg: %.2f\n",
               c[i].name, c[i].age, c[i].matches, c[i].avg);

    return 0;
}