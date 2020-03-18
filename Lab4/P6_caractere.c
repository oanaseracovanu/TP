#include<stdio.h>
#include<string.h>


void citire(int *n, char sir[][20])
{
    int i;
    for(i=0;i<*n;i++)
    {
        printf("Introduceti: ");
        scanf("%s",sir[i]);
    }
}
void afisare(int *n, char sir[][20])
{
    int i;
    for(i=0;i<=*n;i++)
    {
    if(strchr(" .,;!",sir[i])!=NULL)
    printf("%s ",sir[i]);
    }
    printf("\n");
}

void sortare(int *n, char sir[][20])
{
    int i,k;
    char aux[20];
    do
    {
        k=1;
        for(i=1;i<*n;i++)
        {   
            if(strcmp(sir[i],sir[i-1])<0)
            {
                strcpy(aux,sir[i-1]);
                strcpy(sir[i-1],sir[i]);
                strcpy(sir[i],aux);
                k=0;
            }
        }
    } while (!k); 
}

void stergere(int *n, char sir[][20])
{
    int i,j,k=0;                                                                
    for(i=0;i<=(*n-k);i++)
        if(strcmp(sir[i],sir[i+1])==0)
        {
            k++;
            for(j=i;j<=(*n-k);j++)
                strcpy(sir[j],sir[j+1]);
                i--;
        }
        *n=*n-k;
}


int main()
{
    char sir[20][20];
    int n,i;
    printf("Dati nr de caractere ");
    scanf("%d",&n);
    citire(&n,sir);
    afisare(&n,sir);
    sortare(&n,sir);
    afisare(&n,sir);
    stergere(&n,sir);
    afisare(&n,sir);
   return 0;
}