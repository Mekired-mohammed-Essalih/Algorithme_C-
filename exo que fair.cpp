#include<stdio.h>
#include<conio.h>
main()
{
	int x,n,y,z;
	printf("entrez x et n:");
	scanf("%d %d",&x,&n);
	if(x<n)
	{
			y=x/3;
		z=x-(x*3);
	  if(z==0){printf("x=%d",x);}
	             
	  else{printf("erreur");}
	
	}
	else{
		y=x/5;
		z=x-(x*3);
	    }
	      if(z==0){printf("x=%d",x);}
	      else{printf("erreur");}
	
	
	}
