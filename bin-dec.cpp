#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z=1,s=0,a;
	printf("entrez x:");
	scanf("%d",&x);
	if(x==0)
	  printf("0");
	else{
		if(x<0){
		printf("-"),
		x=-x;}
		printf("le nombre x en bin est:");
		while(x>0){
			y=x%2;
			a=y*z;
			z=z*10;
			s=s+a;
			x=x/2;
		}
		printf("%d",s);
		
	} 
	getch();
}
