#include <stdio.h>

int main()
{
	printf("\n\n\n~~~~~~Welcome to E-Bank ~~~~~~\n\n");
	int choice, bal = 25000, pin = 2026, check, amount, pin1, pin2;
	while (1)
	{
		printf("1.Check Balance\n");
		printf("2.Deposit Money\n");
		printf("3.Withdraw Money\n");
		printf("4.Change PIN\n");
		printf("5.Exit\n");

		printf("Enter your choice :");
		scanf("%d", &choice);

		if (choice <= 4 && choice >= 1)
		{
			printf("\n\n\nEnter Pin :");
			scanf("%d", &check);
			if (check == pin)
			{
				switch (choice)
				{
				case 1:
					printf("Balance : %d", bal);
					break;
				case 2:
					printf("Enter the Amount :");
					scanf("%d", &amount);
					if (amount >= 1)
					{
						bal += amount;
						printf("Your Account is Credited with %d\n", amount);
						break;
					}
					else
					{
						printf("Invalid Amount\n");
						break;
					}
				case 3:
					printf("Enter the Amount\n");
					scanf("%d", &amount);
					if (amount >= 1)
					{
            if(amount<=bal){
						  bal -= amount;
						  printf("Your Account is Debited with %d\n", amount);
						  break;
            }
					
					  else
					  {
						  printf("Insuficient Balance\n");
						  break;
					  }
          }
          else{
            printf("Invalid Amount");
            break;
          }
				case 4:
					printf("Enter the New Pin (it should be 4 digit) :");
					scanf("%d", &pin1);
					printf("Confirm the Pin :");
					scanf("%d", &pin2);
					if (pin1 == pin2 && pin1 <= 9999 && pin1 >= 1000)
					{
						pin = pin1;
						printf("Your pin is Updated\n");
						break;
					}
					else
					{
						printf("Pin doesn't match or Invalid!\n");
						break;
					}
				}
			}
		 else
			{
				printf("Invalid Pin\n");
			}
    }
    else if(choice==5){
      break;
    }
		else
		{
			printf("Invalid choice Try again!");
			continue;
		}
		}
			printf("\n\n~~~~~~Thanks for visiting E-Bank ,have a good day~~~~~~ \n\n\n");
			return 0;
	}