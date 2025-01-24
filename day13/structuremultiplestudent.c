#include <stdio.h>
struct student{


	char names [20];
	int rollno ;
	int marks ;
		
	};
	void main()
	{
		int i;
		struct student s[3];
		printf("enter your information\n");
		for(i=0;i<3;i++)
		{
			printf("enter your names");
			scanf("%s",s[i].names);
			printf("enter your rollno");
			scanf("%d",&s[i].rollno);
			printf("enter your marks");
			scanf("%d",&s[i].marks);
			
		}
		printf("display student information\n");
		for(i=0;i<3;i++)
		{
 		printf("name : %s\n",s[i].names);
			printf("rollno :%d\n",s[i].rollno);
			printf("marks :%d\n",s[i].marks);
		}
	}
