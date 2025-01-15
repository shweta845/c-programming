#include<stdio.h>
void main()
{
	int a[3]={1,5,8},i,max=a[0];
	for(i=0;i<3;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	
	}
	printf("%d maximum value",max);
}
