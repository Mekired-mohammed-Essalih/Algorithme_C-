#include<stdio.h>
main()
{
	int a,b;
	a=0;
	for (b=100;b>=0;b=b-5){
		printf("%d ",b);
		a=a+1;
	}
	printf("\nle nobmre pair entre 0 et 100 est: %d",a);
}
