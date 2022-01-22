#include<stdio.h>
int fac(int n){
	if(n==0)
	return 1;
	else
	return n*fac(n-1);
}
float puis(float a,float b){
	if(b==0){
		return 1;
	}else{
		if(b<0){
        return 1/a*puis(a,b+1);		
		}else{
		return a*puis(a,b-1);
		}
	}
}
main()
{
	int x,r;
	float z,t,q;
	scanf("%d",&x);
	r=fac(x);
	printf("%d\n",r);
	scanf("%f\n%f",&t,&q);
	z=puis(t,q);
	printf("%f",z);
	
}
