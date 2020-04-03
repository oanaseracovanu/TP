#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
char **linii=NULL;                
int nrLinii=0;                          
 
void eliberare()
{
    int i;
    for(i=0;i<nrLinii;i++)free(linii[i]);                  
    free(linii);                                                    
}
 
char *linie()
{
    char *buf=NULL;
    char *buf2;
    char ch;
    size_t n=0;
    for(;;)
    {
        n++;
        if((buf2=(char*)realloc(buf,n))==NULL)
        {
            free(buf);
            eliberare();
            printf("memorie insuficienta\n");
            exit(EXIT_FAILURE);
        }
        buf=buf2;
        ch=getchar();
        if(ch=='\n')break;
        buf[n-1]=ch;
    }
    buf[n-1]='\0';
    return buf;
}
 
int main()
{
    char *v;
    char *aux;
    char **linii2;
    char *p;
    int i,j,k;
    for(;;)
    {                                             
        p=linie();
        if(strlen(p)==0)
        {
            free(p);                                     
            break;
        }
        nrLinii++;
        if((linii2=(char**)realloc(linii,nrLinii*sizeof(char*)))==NULL)
        {
            eliberare();
            printf("memorie insuficienta\n");
            exit(EXIT_FAILURE);
        }
        linii=linii2;
        linii[nrLinii-1]=p;
    }
    p=linie();
    do
   {
       k=1;
    for(i=0;i<nrLinii;i++)
    {
        for(j=i+1;j<nrLinii;j++)
        if(strcmp(linii[i],linii[i+1])>0)
        {
            aux=linie();
            strcpy(aux,linii[i]);
            strcpy(linii[i],linii[j]);
            strcpy(linii[j],aux);
            k=0;
        }
    }
   }while(!k);
    
    for(i=0;i<nrLinii;i++)
    {
    printf("%s ",linii[i]);
    printf("\n");
    }
    free(p);
    eliberare();
    return 0;
}