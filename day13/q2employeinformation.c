#include<stdio.h>
struct employee
{
	 int employeeID;
	 char name [20];
	 int salary;
};
void main()
{
int i;	
struct employee e1;
printf("enter employee information\n");


printf("enter details\n");
printf("enter  employeID\n");
scanf("%d",&e1.employeeID);
printf("enter name\n");
scanf("%s",e1.name);
printf("enter salary\n");
scanf("%d",&e1.salary);
printf("enter the employee information\n");
printf("emplyeeID : %d\n",e1.employeeID);
printf("name : %s\n",e1.name);
printf("salary : %d",e1.salary);
}



