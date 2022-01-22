#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d;
	float x,y;
	printf("ax+by+c=0   ");
printf("entrez a=");
scanf("%d",&a);
printf("entrez b=");
scanf("%d",&b);
printf("entrez c=");
scanf("%d",&c);
d=(b*b)-(4*a*c);
x=(-b-sqrt(d))/(2*a);
y=(-b+sqrt(d))/(2*a);
printf("x=%f y=%f",x,y);


	
	
	
	
	
}
