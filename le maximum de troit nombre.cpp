#include<stdio.h>
main()
{
	float a,b,c,max;
	printf("entrez a=");
	scanf("%f",&a);
	printf("\nentrez b=");
	scanf("%f",&b);
	printf("entrez c=");
	scanf("%f",&c);
	if(a>b){
	max=a;
	}
	else{
		max=b;
	}
	if(c>max){
		printf("le maximum nombre est:%f",c);
		
	}else{
		printf("le maximum nombre est:%f",max);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
