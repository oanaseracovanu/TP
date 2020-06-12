#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *f;
    char linii[50][50],linie[50];
    int i;
    
    if((f=fopen("text.txt","rt"))==NULL)
    {
        printf("eroare");
        exit(1);
    }
    
    int k=0;
    while(fgets(linie,50,f)!=NULL)
    {
        strcpy(linii[k],linie);
        k++;
    }

    for(i=0;i<k;i++)
    printf("%s ",linii[i]);
    fclose(f);
    return 0;
}