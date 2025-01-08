#include<stdio.h>
void main()
{
	float w1,w2,avg;
	float p1,p2;
	printf("enter the weight of items and the number of purches");
	scanf("%f%f",&w1,&p1);
	printf("enter the weight of item and the number of purches");
	scanf("%F%f",&w2,&p2);
	avg=(w1*p1+w2*p2)/2;
	printf("the average value of item is%f",avg);
}
