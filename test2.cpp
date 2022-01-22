#include<stdio.h>
main()
{
	int a,b,c;
	printf("entre a=");
	scanf("%d",&a);
	printf("\nentre b=");
	scanf("%d",&b);
	if (b==0)
	{
		printf("no solution");
	}
	else{
		if(a==3){
			printf("n'existe pas");
		}
		else{
		
	c=a/b;
	printf("c=a/b");
	
	printf("\nc=%d",c);
	
	}
	
	}
	getchar();
	
}
