#include<stdio.h>
#define M 3
#define N 3
void liremat(float m[M][N])
{
    int k,w;
    for(k=0; k<N; k++)
        for(w=0; w<M; w++)
            scanf("%f",&m[w][k]);
}
void afichemat(float m[M][N])
{
    int k,w;
    for(k=0; k<M; k++)
        for(w=0; w<N; w++)
            printf("%f\n",m[k][w]);

}
float crd (float m [M][N])
{
    int i,g;
    g=0;
    for(i=0; i<N; i++)
    {
        if (m[0][i]>=10)
        {
            g=g+m[1][i];
        }
    }
    return g;
}
float moys (float mat [M][N])
{
    int j,i;
    float moy,c;
    moy=0;
    c=0;
    for(j=0; j<N; j++)
    {
        moy=moy+mat[0][j]*mat[2][j];
        c=c+mat[2][j];

    }
    return moy/c ;
}

float moyg (float mat [M][N],float mat2[M][N])
{
    float moygn;
    moygn=(moys(mat2)+moys(mat))/2;
    return moygn;
}
void delib (float mg,float mat[M][N],float s2[M][N])
{
    int k,l;
    if (mg>17)
        printf("admis avec exellent");
    else if (mg>15)
        printf("admis avec tres bien");
    else if(mg>13)
        printf("admis avec bien");
    else if (mg>11.5)
        printf("admis avec assez");
    else if (mg>=10)
        printf("admis");
    else if (mg>7 )
        k=crd(mat);
    l=crd(s2);
    if (k+l>45 && (k>10 && l>10) )
    {
        printf("admis avec credit");

    }

}
main()
{
    float mg;
    float mat[M][N];
    float s2[M][N];
    printf ("Entrer Les notes de S1 avec leurs credits et leurs coiffecient !\n");
    liremat(mat);
    afichemat(mat);
    printf ("la moyenne de 1 er semestre  est= %f\n",moys(mat));
    printf ("le credit  de 1 eme semestre est= %f\n\n",crd(mat));
    printf ("Entrer Les notes de S2 avec leurs credits et leurs coiffecient !\n");
    liremat(s2);
    afichemat(s2);
    printf ("la moyenne de 2 eme semestre est= %f\n",moys(s2));
    printf ("le credit  de 2 eme semestre est= %f\n\n ",crd(s2));
    mg=moyg(mat,s2);
    printf ("la moyenne generale est= %f\n",mg);
    delib(mg,mat,s2);
}
