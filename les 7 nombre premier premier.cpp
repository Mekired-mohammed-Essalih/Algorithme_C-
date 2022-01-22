#include<stdio.h>
#define bool int
#define true 1
#define false 0
main(){
	int t[7],n=3,d=1,i=1,k;
	bool p=true;
	t[0]=2;
	while(i<7){
		while((d<=n/2)&&(p=true)){
			if(n%d==0){
				p=false;
			}
			d++;
		}
		if(p==true){
			t[i]=n;
			i++;
			n=n+2;
			
		}else{
			n=n+2;
		}
	}
	for(k=0;k<7;k++){
		printf("%d ",t[k]);
	}
}
	
	
	

