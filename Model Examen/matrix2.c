//matrice alocata dinamic
//o noua linie care sa contina produsul elementelor pare de pe coloana 

#include<stdio.h>
#include<stdlib.h>

int **a;

void citire(int n)
{
    int i,j;
    a=(int**)malloc(n*sizeof(int*));
    if(!a)
    {
        printf("Eroare alocare linii\n");
        free(a);
        exit(1);
    }
    for(i=0;i<n;i++)
    {
    a[i]=(int*)malloc(n*sizeof(int));
    if(!a[i])
    {
        printf("Eroare alocare coloane\n");
        free(a);
        exit(1);
    }
    }
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        printf("a[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
    }
}

void adaugare(int n)
{
    int i,j;
    a=(int**)realloc(a,(n+1)*sizeof(int*));
    a[n]=(int*)malloc(n*sizeof(int));
    if(a[n]==NULL) exit(1);
    for(i=0;i<n;i++)
    { 
        a[n][i]=1;
        for(j=0;j<n;j++){
        a[n][i]=a[n][i]*a[j][i];
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
  
}

int main()
{
    int n;
    printf("Nr de linii si coloane: ");
    scanf("%d",&n);
    citire(n);
    adaugare(n);
    return 0;
}