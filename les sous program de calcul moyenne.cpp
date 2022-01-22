#include<stdio.h >
#include<conio.h>
#define n 7
#define m 3
void liremat(float mat[m][n]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%f",&mat[j][i]);
		}
	}
}
void affichemat(float mat[m][n]){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%f  ",mat[i][j]);
		}
		printf("\n");
	}
	}
float calculmoy(float mat[m][n]){
	float som=0,somco=0,moy;
	int j;
	for(j=0;j<n;j++){
		som=som+(mat[0][j]*mat[2][j]);
		somco=somco+mat[2][j];
		
	}
	moy=som/somco;
	return moy;
}
float credit(float mat[m][n]){
	int j;
	float cr=0;
	for(j=0;j<n;j++){
		if(mat[0][j]>=10){
		cr=cr+mat[1][j];}
	}
	return cr;	
}
float moyennegeneral(float mat1[m][n],float mat2[m][n]){
	float mg;
	mg=(calculmoy(mat1)+calculmoy(mat2))/2;
	return mg;
}
main()
{
	float a,b,c,d,moyg;
	float mat1[m][n];
	float mat2[m][n];
    int i,j;
    liremat(mat1);
    affichemat(mat1);
	a= calculmoy(mat1);
	
	printf("le moyenne de semester 1 est:%f\n\n",a);
	
	c=credit(mat1);
	printf("le credit de semester 1 est:%f\n\n",c);
	liremat(mat2);
    affichemat(mat2);
	
	b=calculmoy(mat2);
	
	printf("le moyenne de semester 2 est :%f\n\n",b);
	
	d=credit(mat2);
	printf("le credit de semester 2 est :%f\n\n",d);
	
	moyg=moyennegeneral(mat1,mat2);
	
	printf("le moyenne general est:%f",moyg);
	
	getch();
	return(0);
}
