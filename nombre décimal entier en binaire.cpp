#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z,s;
	y=1;
	z=0;
	printf("entrez le nombre x:");
	scanf("%d",&x);
	if(x<0){
		printf("-"),
		x=-x;
	}
	while(x>0){
		z=z+(x%2)*y;
		x=x/2;
		y=y*10;
	}
	printf("le nombre rn bin est:%d",z);
	getch();
	
}
