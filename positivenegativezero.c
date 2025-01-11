#include<stdio.h>
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num>0)
	{
		printf("%d is positive number\n",num);
		
	}
	else if (num<0)
	{
		printf("%d is negative\n",num);
	}
	else
	{
		printf("%d is zero",num);
	}
}
