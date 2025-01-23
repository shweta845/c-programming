#include<stdio.h>
void main()
{
	int A[2][2]={{4,4},{3,3}};
	int B[2][2]={{3,3},{4,4}};
    int sum [2][2],i,j;

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("square of matrics\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}
