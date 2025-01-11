#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("enter a first number");
	scanf("%d",&num1);
	printf("enter a second number");
	scanf("%d",&num2);
	printf("enter a third number");
	scanf("%d",&num3);
	if (num1>num2&&num1>num3)
	{
		printf("the maximum number is%d",num1);
		
	}
	else if(num2>num1&&num2>num3)
	{
		printf("the maximum number is%d",num2);
	}
	else
	 {
		printf("the maximun number is%d",num3);
	}
}
