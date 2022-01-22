#include<stdio.h>
int pgcd(int a, int b){
	if(a==b)
	return a;
	else{
		if(a>b)
		return pgcd(a-b,b);
		else
		return pgcd(a,b-a);
	}
}
main(){
int a,b,r;
printf("entrez les nombre a est b:");
scanf("%d\n%d",&a,&b);
r=pgcd(a,b);
printf("%d",r);
}
