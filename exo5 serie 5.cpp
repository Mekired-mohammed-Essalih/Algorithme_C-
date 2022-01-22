#include<stdio.h>
#define n 10
main(){
	int t[n],i,x;
	for(i=0;i<10;i++){
		scanf("%d",&t[i]);
	}
	printf("quelle case elle est supprimes:");
	do{
		scanf("%d",&x);
	}while(x<0);
	x--;
	for(i=x;i<9;i++){
		t[i]=t[i+1];
	}
	for(i=0;i<9;i++){
		printf("%d",t[i]);
	}
}
