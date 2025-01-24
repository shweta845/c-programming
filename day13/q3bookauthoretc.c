#include <stdio.h>
struct book {


	char tittle [20];
	char author[20] ;
	int price ;
		
	};
	void main()
	{
		int i;
		struct book b[5];
		printf("enter your information of book\n");
		for(i=0;i<3;i++)
		{
			printf("enter tittle ");
			scanf("%s",b[i].tittle);
			printf("enter author");
			scanf("%s",b[i].author);
			printf("enter price");
			scanf("%d",&b[i].price);
			
		}
		printf("display books information\n");
		for(i=0;i<3;i++)
		{
			printf("tittle : %s\n",b[i].tittle);
			printf("author :%s\n",b[i].author);
			printf("price :%d\n",b[i].price);
		}
	}
