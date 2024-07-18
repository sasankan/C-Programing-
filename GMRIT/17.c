#include <stdio.h>

int main() {
    int choice;
    float amount;
    float balance=10000;

    while (1)
    {
        printf("1. Press one to check the Balance\n");
        printf("2. Press two to Deposit money\n");
        printf("3. Press three to Withdraw money\n");
        printf("4. Press four to Exit\n");

        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("The balance is Rs%f\n",balance);
            break;
        
        case 2:
            printf("Enter the amount to deposit: ");
            scanf("%f",&amount);
            if(amount>0){
                balance+=amount;
                printf("The amount Rs%f has been added to the account\n",amount);
            }
            else{
                printf("Invalid amount\n");
            }
            break;
        
        case 3:
            printf("Enter the amount to withdraw: ");
            scanf("%f",&amount);
            scanf("%f",&amount);
            if(amount>0 || amount<balance){
                balance-=amount;
                printf("The amount Rs%f has been debited from the account\n",amount);
            }
            else{
                printf("Invalid amount\n");
            }
            break;
        
        case 4:
            printf("Good bye\n");
            return 0;
        
        default:
            printf("Invalid Choice\n");
            break;
        }

    }
    return 0;
}
