#include<stdio.h>
void main()
{
	int i=1;
	while(i<=4)
	{
	int	j=1;
	while(j<=i)
	{
			printf("*");
			j++;
	}
	printf("\n");
	i++;
	}
}
