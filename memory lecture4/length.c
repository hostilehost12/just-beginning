#include <stdio.h>

int main()
{
    int choice;
    float balance = 1000.0;
    float amount;

    while(1)
    {
        printf("\n--- ATM MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Current Balance: %.2f\n", balance);
        }

        else if(choice == 2)
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            balance = balance + amount;

            printf("New Balance: %.2f\n", balance);
        }

        else if(choice == 3)
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if(amount > balance)
            {
                printf("Insufficient Balance\n");
            }
            else
            {
                balance = balance - amount;
                printf("Remaining Balance: %.2f\n", balance)
            }
        }

        else if(choice == 4)
        {
            printf("Exiting program...\n");
            break;
        }

        else
        {
            printf("Invalid choice\n");
        }
    }

    return 0;
}