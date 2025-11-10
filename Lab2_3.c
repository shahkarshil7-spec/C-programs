#include <stdio.h>

int main() 
{
    float gross_salary, allowances, deductions, net_salary;

    printf("Enter Gross Salary: ");
    scanf("%f", &gross_salary);

    if (gross_salary > 10000) 
    {
        allowances = gross_salary * 0.10;
        deductions = gross_salary * 0.03;
    }
    else if (gross_salary > 5000) 
    {
        allowances = gross_salary * 0.07;
        deductions = gross_salary * 0.02;
    } 
    else 
        {
            allowances = 0;
            deductions = 0;
        }
    net_salary = gross_salary + allowances - deductions;

    
    printf("Net Salary: %f\n", net_salary);
    return 0;
}
