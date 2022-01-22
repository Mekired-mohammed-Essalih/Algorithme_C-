#include<stdio.h>
main()
{
	int term,avant,dernier,n,i;
	printf("u");
	scanf("%d",&n);
	if(n>1){
	dernier=1;
	avant=0;
	for(i=2;i<=n;i++){
		term=dernier+avant;
		avant=dernier;
		dernier=term;
		printf(" %d",term);
	}
	}else{printf("erreur");
	}
	
	
}
