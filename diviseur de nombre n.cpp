#include<stdio.h>
main()
{
	int n,i;
	printf("entrez le nombre n:");
	scanf("%d",&n);
	if(n>1){
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				printf(" %d",i);
			}
		}
	}else{
	     if(i==1)
	printf("la diviseur de ",n,"=1");
	     else
		  printf("erreur");
		     	
	     }

	
}
