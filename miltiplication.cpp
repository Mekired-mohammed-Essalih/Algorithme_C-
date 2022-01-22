#include<stdio.h>
main()
{
	int x,cpt;
	printf("entrez le nombre x:");
	scanf("%d",&x);
	if(x>1){
		cpt=1;
		while(cpt<=10){
			printf("%d*%d=%d\n",x,cpt,x*cpt);
			cpt=cpt+1;
		}
	}else 
	printf("erreur ! xdoit etre positif");
	
}
