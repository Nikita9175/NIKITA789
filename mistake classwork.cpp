#include <stdio.h>
int main()
{
	const int accountnumber = 123456789;
	int balance = 10000; 
	int option;
	int depositmoney,withrawmoney;
	char again;
	int mypincode = 9999;
	int pincode;
	int count = 0;
	printf("************************");
	printf("\n welcome to ATM service\n");
	printf("\n Enter your pin code \n");
	
	do{
		printf(" 1. Depodit Money \n 2. Withdraw money\n 3. Account Information");
     	printf("\nEnter your option\n");
    	scanf("%d",&option);
	    switch(option)
		
	}
	
	{
		case 1:
			printf("\ How much do you want to deposit \n");
			scanf("%d",&depositmoney);
			balance = balance + depositmoney;
			printf("\n your total balance = %d",balance)
	}
	
}