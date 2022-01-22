#include<stdio.h>
#include<conio.h>
main()
{
	int hh,mm;
	scanf("%d:%d",&hh,&mm);
	if(hh>24 || hh<0 || mm<0 || mm>60){
		printf("erreur");
	}else
	{
	mm++;
	if(mm==60){
		mm=0;
		hh=hh+1;
	}if(hh==24){
		hh=0;
		
	}
	printf(" l'heur apres 1 min:%d:%d",hh,mm);
	}
	getch();
	
}
