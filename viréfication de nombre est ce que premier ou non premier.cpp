#include<stdio.h>
#include<conio.h>
main()
{
	int x,nb;
	printf("entrez le nombre x:");
	scanf("%d",&x);
	nb=2;
	if(x!=1){
	while((nb<=x/2)&&(x%nb!=0)){
		nb=nb+1;
	}
	if(nb>x/2){
		printf("%d est nombre premier",x);
	}else{
		printf("%d est nombre non premier ",x);
	}
	}else
	printf("%d est non premier",x);
	getch();
}
