#include<stdio.h>
#include<conio.h>
main()
{
int x,co=0,t=0,i=0,f=0;
float p,n,m;
do{
	scanf("%d",&x);
	if(x>0)
	  i=i+1;
	else{
	   if(x==0){
	      t=t+1;}
	   else{
	     f=f+1;}
}
co=co+1;
}while(x!=100);
p=i*100/co;
n=f*100/co;
m=t*100/co;
printf("p=%f n=%f m=%f",p,n,m);
getch();
}
