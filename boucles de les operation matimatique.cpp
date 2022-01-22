#include<stdio.h>
main()
{
   int v1,v2;
   float z;
   char op;
   scanf("%d",&v1);
   scanf("\n%c",&op);
   if(op!='@'){
   	scanf("%d",&v2);
   }
   switch (op)
   {
       case '+':printf("%d",v1+v2);
       break;
       case '-':printf("%d",v1-v2);
       break;
       case '*':printf("%d",v1*v2);
       break;
       case '/':
       	if(v2==0)
       		printf("erreur");
		else{z=v1/v2;
		   printf("%f",v1/v2);}
	   break;
	   default:printf("erreur");	   
   } 
    
    
    
}
