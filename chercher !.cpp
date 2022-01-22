#include<stdio.h>
main()
{
	char c;
	do{
		scanf("%c",&c);
	}while((c!='>')&&(c!='!'));
	if(c=='!')
	printf("le ! existe");
	else
	printf("le ! n'existe pas");
	
}
