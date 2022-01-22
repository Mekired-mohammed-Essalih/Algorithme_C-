#include<stdio.h>
#include<conio.h>
main()
{
	int age;
	do{
		printf("entrez la age svp:");
		scanf("%d",&age);
	}while((age<0)||(age>120));
	if(age<=18)
	printf("mineur");
	else
	printf("major");
	getch();
	
	
}
