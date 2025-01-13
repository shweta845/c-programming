#include<stdio.h>
void main()
{
	int i,num,sum=0,avg;
	
	for (i=1;i<10;i++){
	
		printf("enter the  number\n");
	scanf("%d",&num);
	
sum=sum+num;
	}

	avg=sum/10;
	printf("%d",sum);
	printf("%d",avg);
}
