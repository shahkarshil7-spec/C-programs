#include <stdio.h>

float add(float a, float b)     { return a + b; }
float subtract(float a, float b){ return a - b; }
float multiply(float a, float b){ return a * b; }
float divide(float a, float b)  { return b != 0 ? a / b : 0; }

int main() {
    float num1, num2;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Choose operation:\n 1.Add \n 2.Subtract\n 3.Multiply\n4.Divide\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Result: %.2f\n", add(num1, num2)); break;
        case 2: printf("Result: %.2f\n", subtract(num1, num2)); break;
        case 3: printf("Result: %.2f\n", multiply(num1, num2)); break;
        case 4:
            if (num2 != 0)
                printf("Result: %.2f\n", divide(num1, num2));
            else
                printf("Error: Division by zero\n");
            break;
        default: printf("Invalid choice\n");
    }

    return 0;
}