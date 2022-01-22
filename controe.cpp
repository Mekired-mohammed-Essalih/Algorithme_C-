#include<stdio.h>
#define n 5
main()
{
	int t[n],v[n];
	int i,co,b=1;
	for(i=1;i<6;i++){
		scanf("%d",&t[i]);
	}
	for(i=1;i<6;i++){
		scanf("%d",&v[i]);
	}
	for(i=1;i<6;i++){
		if(t[i]!=v[i]){
			b=0;
		printf(" n'est pas le meme nombre");
		break;
		}else
		b=1;
	}
	if(b==1){
		printf("le meme");
	}
}
