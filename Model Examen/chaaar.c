#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char text[40],*p,separator[]=" ,.;!?",cuv[40][40],aux[40];
    int i,k,n;
    FILE *f;
    if((f=fopen("sir.txt","rt"))==NULL)
    {
        printf("Fisierul nu poate fi deschis!");
        exit(EXIT_FAILURE);
    }
        
        while(fgets(text,40,f)!=NULL)
        text[strlen(text)]='\0';
        p=strtok(text,separator);
        i=0; n=0;
        while(p)
        {
            strcpy(cuv[i],p);
            i++;
            n++;
            p=strtok(NULL,separator);
        }
        printf("Textul este format din urmatoarele cuvinte: \n");
        for(i=0;i<n;i++)
        printf("%s\n",cuv[i]);

    fclose(f);
    do
    {
        k=1;
        for(i=1;i<n;i++)
            if(strcmp(cuv[i-1],cuv[i])>0)
        {
            strcpy(aux,cuv[i-1]);
            strcpy(cuv[i-1],cuv[i]);
            strcpy(cuv[i],aux);
            k=0;
        }
    }while(!k);
    printf("Cuvintele ordonate alfabetic: \n");
    for(i=0;i<n;i++)
    printf("%s\n",cuv[i]);
    return 0;
}