#include<stdio.h>
void main()
{
int Day_Number;
printf("enter 1,2,3,4,5,6or 7");
scanf("%d",& Day_Number);
	switch(Day_Number){
		case 1:
		printf("sunday");
		break;
		case 2:
			printf("monday");
			break;
		case 3:
		printf("tuesday");
		break;
		case 4:
			printf("wenesday");
			break;
	    	case 5:
				printf("thruesday");
				break;
			case 6:
					printf("friday");
					break;
			case 7:
						printf("saturday");
						break;
						
		default:
		printf("invalid break,choice");
		break;
	}

}
