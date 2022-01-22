#include<stdio.h>
#define n 7
void affiche (int t[n],int i){
	if(i==n-1)
	printf("%d",t[i]);
	else{
		printf("%d",t[i]);
		affiche(t,i+1);
	}

}
main(){
	int t[n]={1,2,3,4,5,6,7};
	int i;

	affiche(t,i);
	
	
}
