#include<stdio.h>
#include<conio.h>
main()
{
	float temp;
	printf("entrez le temp=");
	scanf("%f",&temp);
	if(temp<0){
		printf("l'eau est à l'état solide");
	}
	else{if(temp<100){
		printf("l'eau est à l'état liquide");
	}else
	printf("l'eau est à l'état gazeuse");
	}
	getch();
	
	
	
}
