#include<stdio.h>
void main()
{
char str[20],*p1;
p1=str[0];
	 char vowel=0;
     char consonant=0;
     printf("enter the string");
     scanf("%s",str);
    if(str=='a'||str=='e'||str=='i'||str=='o'||str=='u')
    {
    	printf("%c the vowel is ",*p1);
	}else
	
	{
		printf("the consonant is%c",*p1);
	}

}
