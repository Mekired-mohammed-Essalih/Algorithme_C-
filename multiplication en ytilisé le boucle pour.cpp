#include<stdio.h>
main()
{
	int x,co;
	printf("entrez le nombre x:");
	scanf("%d",&x);
	if(x>1){
		for(co=1;co<=10;co++){
			printf("%d*%d=%d\n",x,co,x*co);
		}
	}else
	printf("erreur! x doit entre positiv");
	
}
