#include<stdio.h>
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",num);
	if (num%5==0&&num%11==0)
	{
		printf("the number is divisible");
	}
	
	else 
	{
		printf("the number is not divisible");
	}
	
}
