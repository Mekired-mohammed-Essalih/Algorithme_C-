#include<stdio.h>
#include<conio.h>

main()
{
	float p,t,i;
	printf("entrez p=");
	scanf("%f",&p);
	printf("entrez t=");
	scanf("%f",&t);
	i=p/(t*t);
	if(i<18.5){
		printf("maigreur");}
	else{if(i<24.9){
		printf("limite moyenne");
	}else{printf("surpoids");
	}
	getch();
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
