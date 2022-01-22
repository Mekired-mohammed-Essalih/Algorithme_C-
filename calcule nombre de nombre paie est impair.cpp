#include<stdio.h>
#include<conio.h>
main()
{
	int a,nbp=0,nbimp=0;
	do{
		scanf("%d",&a);
		if(a%2!=0){
			nbimp++;
		}else{
		    nbp++;
		}
	}while(a!=0);
	
	printf("le de nombre impair est:%d\n",nbp);
	printf("le de nombre pair est :%d",nbimp);
	getch();
	
}
