#include <stdio.h>
int main()
{
	int num,i,count=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num % i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("prime number");
	}
	else if (num==1)
	{
		printf("Neither prime nor composite");
	}
	else
	{
		printf("Composite number:");
	}
	return 0;
}
