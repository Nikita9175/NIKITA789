#include <stdio.h>
int main()
{
	int num;
	printf("Enter num");
	scanf("%d",&num);
	if((num %3 == 0) && (num %7 == 0))
	{
		printf("%d divisible by 3 and 7",num);
	}
	else if ((num%3==0)&&(num%7!=0))
	{
		printf("%d is divisible by only 3 but not by 7",num);
	}
	else if((num%3!=0)&&(num%7==0))
	{
		printf("%d is not divisible by 3 but only by 7",num);
	}
	else{
		printf("%d is not divisible by neither of the number",num);
	}
	return 0;
}