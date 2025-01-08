#include<stdio.h>
void main()
{
	float area,r,h;
	printf("enter the radius of cone");
	scanf("%f",&r);
	printf("enter the slant height of cone");
	scanf("%f",&h);
	area=(3.14*r*(r+h));
	printf("enter the area of cone %d",area);
}
