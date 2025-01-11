#include<stdio.h>
void main()
{
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	if ((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
	{
		printf(" %c its a alphabet");
	}
	else
	{
		printf("%c its not a alphabet");
	}
}
