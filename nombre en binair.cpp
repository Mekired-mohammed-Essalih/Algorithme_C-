#include<stdio.h>
#define n 10 
main(){
	int t[n],x,i,k;
	do{
		scanf("%d",&x);
	}while((x<0)||(x>100));
	
	if(x==0){
		t[n]=0;
		i=n;
	}else{
		i=n-1;
		while(x>0){
			t[i]=x%2;
			i--;
			x=x/2;
		}
	}
	for(k=i+1;k<n;k++){
		printf("%d",t[k]);
	}
	
	
	
	
	
	
}
	
