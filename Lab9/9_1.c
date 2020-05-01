#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f;
    int n,i,j;
    printf("Nr de elemente: ");
    scanf("%d",&n);
    if((f=fopen("9_1.txt","w"))==NULL)
    {
    printf("Fisierul nu poate fi deschis!\n");
    return -1;
    }
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
    {
    if(i<j) fprintf(f,"%c ",'-');
    else
    if(i==j) fprintf(f,"%c ",'0');
    else
    fprintf(f,"%c ",'+');
    }
    fprintf(f,"\n");
    }
    fclose(f);
    return 0;
}