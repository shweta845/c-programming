#include<stdio.h>
void main()
{
	char name[20];
	int i;
	printf("enter the name");		
//	scanf("%s",name);
gets(name);
	
	for(i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
	}

}
