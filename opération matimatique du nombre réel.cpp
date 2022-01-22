#include<stdio.h>
main()
{
	float a,b;
	char op;
	printf("entrez a=");
	scanf("%f",&a);
	printf("\nentrez op:");
	scanf("\n%c",&op);
	printf("\nentrez b=");
	scanf("%f",&b);
	switch (op)
	{
		case '+': printf("%f",a+b);
		break;
		case '-': printf("%f",a-b);
		break;
		case '*': printf("%f",a*b);
		break;
		case '/': if(b==0)
		          printf("erreur");
		          else printf("%f",a/b);
		break;
		default:printf("erreur");          
	}
	
}
