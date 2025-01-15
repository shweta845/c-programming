#include<stdio.h>
void main()
{
	int i,j, a[5]={1,2,3,4,5};
	int evenarray[5],oddarray[5],even=0,odd=0;
	for (i=0;i<5;i++)
	{
		if(a[i]%2-1){
		
	
		evenarray[even]= a[i];
        even++;

	}
		
	}
	for(i=0;i<5;i++)
	{
	
	if(a[i]%2){
		  oddarray[odd]= a[i];
        odd++;
	}
}
printf("the even array is :");
  for(i=0;i<even;i++)

{
	printf("%d",evenarray[i]);
}
printf("\nthe odd array is:- ");
for(i=0;i<odd;i++)
{
    printf("%d ", oddarray[i] );
}
	
		
	
}
