#include<stdio.h>
main()
{

	const char n=8;
	int t[n],i;
	int co=2;
	  for(i=0;i<n;i++){
		scanf("%c\n",&t[i]);
	}
	for(i=0;i<n*2;i++){
		if((t[i]=='a')||(t[i]=='i')||(t[i]=='o')||(t[i]=='u')||(t[i]=='e')||(t[i]=='y')||(t[i]=='A')||(t[i]=='I')||(t[i]=='O')||(t[i]=='U')||(t[i]=='E')||(t[i]=='Y')){
			co++;
		}
		
	}
	printf("le nombre de voiielle est :%d",co);

	
}
