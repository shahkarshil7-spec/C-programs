#include <stdio.h>

struct Customer 
{
    int acc;
    char name[50];
    float balance;
};

void printLowBalance(struct Customer c[], int n) 
{
    for (int i = 0; i < n; i++)
        if (c[i].balance < 3500)
            printf("Acc: %d, Name: %s\n", c[i].acc, c[i].name);
}

void updateBalance(struct Customer c[], int n, int acc, float amt, int code) {
    for (int i = 0; i < n; i++) {
        if (c[i].acc == acc) {
            if (code == 1)
                c[i].balance += amt;
            else if (amt <= c[i].balance)
                c[i].balance -= amt;
            else
                printf("The balance is insufficient for the specified withdrawal\n");
            return;
        }
    }
    printf("Account not found\n");
}

int main() {
    struct Customer c[10] = {
        {101, "Preet", 1800}, {102, "Vatsal", 1500}, {103, "Aryan", 5000},
        {104, "Jay", 2000}, {105, "Karshil", 8000}, {106, "Het", 3000},
        {107, "Jeet", 4000}, {108, "Daiwik", 1200}, {109, "Arnav", 6000}, 
        {110, "Pravar", 5000}
    };

    printf("Customers with balance < Rs.3500:\n");
    printLowBalance(c, 10);

    int acc, code;
    float amt;
    printf("\nEnter Account, Amount, Code (1=Deposit, 0=Withdraw): ");
    scanf("%d %f %d", &acc, &amt, &code);
    updateBalance(c, 10, acc, amt, code);

    return 0;
}