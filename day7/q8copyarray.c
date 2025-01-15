#include<stdio.h>
void main()
{
	int  i,j,b[4],a[4]={1,2,3,4};
	for(i=0;i<4;i++)
	{
		for(j=1;j<=3;j++)
		{
      b[i]=a[i];
		}
		
	}
	for(i=0;i<4;i++)
	printf("%d",b[i]);
}
