#include<stdio.h>
#include<math.h>
#define n 10
main(){
	int max,i,imax, t[n];
	for(i=0;i<10;i++){
		scanf("%d",&t[i]);
	}
	max=t[0]*t[0];
	imax=0;
	for(i=1;i<10;i++){
		if((t[i]*t[i])>max){
			max=t[i]*t[i];
			imax=i;
		}
	}
	printf("le plus grand carre est:%d provient de l'element:%f\n",max,sqrt(max));
	printf("le plus grand indice est:%d",imax);
}
