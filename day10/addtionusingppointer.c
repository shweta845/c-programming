#include<stdio.h>
void main()
{
	int a=2,b=3,result;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	result=*p1+*p2;
	printf("addtition of two number is %d",result);
}
