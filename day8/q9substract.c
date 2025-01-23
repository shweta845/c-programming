#include<stdio.h>
void main()
{
	int A[2][2]={{4,4},{3,3}};
	int B[2][2]={{3,3},{4,4}};
    int C[2][2],i,j;

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			C[i][j]=A[i][j]-B[i][j];
		}
	}
	printf("substract of matrics\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
}
