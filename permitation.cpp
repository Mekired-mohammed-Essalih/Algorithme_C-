#include<stdio.h>
void add(int x, int y,int *z){
	*z=x+y;
}
main()
{
	int x=5,y=6,z;
	printf("x=5\ny=6\n");
	add(x,y,&z);
	printf("z=%d",z);
}
