#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int account_number;
    double beginning_balance;
    double balance;
    double charges;
    double credit;
    double credit_limit;

    account_number = 0;

    while (1)
    {

        printf("Enter account number or -1 to cancel: ");
        scanf("%d", &account_number);
        if (account_number == -1)
        {
            break; // Exit the loop immediately if -1 is entered
        }

        printf("Enter beginning balance: ");
        scanf("%lf", &beginning_balance);

        printf("Enter total charges: ");
        scanf("%lf", &charges);

        printf("Enter total credits: ");
        scanf("%lf", &credit);

        printf("Enter credit limit: ");
        scanf("%lf", &credit_limit);

        balance = beginning_balance + credit;

        printf("Account: %d\n", account_number);
        printf("Credit limit: %.2lf\n", credit_limit);
        printf("Balance: %.2lf\n", balance);

        if (balance > credit_limit)
        {
            printf("Credit Limit Exceeded.\n");
        }
    }

    return 0;
}