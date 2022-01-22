#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{ 
	float a,b,c,d,x1,x2,x0,xi,xr;
	printf("ax^2+bx+c=0");
	printf("\ndonner les valeurs a,b,c: ");
	printf("\na=");
	scanf("%f",&a);
		printf("\nb=");
	scanf("%f",&b);
		printf("\nc=");
	scanf("%f",&c);
if(a==0){
	if(b==0){
		if(c==0){
			printf("infinite de solution");
		}else{ printf("probleme impossible");}
		
	}else{
		printf("Equation de 1ere degre");
		printf("\nla solution est:%f",-c/b);
	     }
}else{
	
	d=b*b-4*a*c;
    	if (d==0){
	 	  x0=(-b)/(2*a);
		  printf("\nla solution est x0=%f",x0);
	             }
	    else if(d>0){
		     x1=(-b-sqrt(d))/(2*a);
		     x2=(-b+sqrt(d))/(2*a);
		     printf("les solution est: \nx1=%f \nx2=%f",x1,x2);
			        }
	        else{	
		       xr=-b/(2*a);
		       xi=sqrt(-d)/(2*a);
		       printf("la premier solution est:%f -i %f",xr,xi);
		       printf("\nla deuxieme solution est:%f +i %f",xr,xi);
	            }
	 }     
	 getch();      
	return 0;
	
	
	

}
