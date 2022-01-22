#include<stdio.h>
main()
{
	int mois,annee;
	printf("entrez un mois:");
	scanf("%d",&mois);
	printf("entrez une annee:");
	scanf("%d",&annee);
	if((mois<=0)||(mois>12)){
		printf("erreur");
	}else{
		switch (mois){
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
				printf("31jours");
				break;
				case 4:case 6:case 9:case 11:
					printf("30jours");
				break;
				case 2: if((annee%4==0)&&(annee%100!=0)){
					
					printf("29jours");
				}	else{ printf("28jours");}
				break;
				
		}
    }
}
