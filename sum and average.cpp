#include<stdio.h>
int main()
{
	int i,sum=0,count=0;
	float average;
	for(i=55;i<=88;i++)
	{
		sum=sum+i;
		count=count+1;
	}
	average=(float)sum/count;
	printf("sum=%d",sum);
	printf("Avverage=%f",average);
	return 0;
}
