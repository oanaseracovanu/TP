#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
char **linii=NULL;                
int nrLinii=0;                          
 
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
    char **linii2;
    char *p;
    int i,j,k;
    printf("Introduceti textul: ");
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
            printf("memorie insuficienta\n");
            exit(EXIT_FAILURE);
        }
        linii=linii2;
        linii[nrLinii-1]=p;
    }
    
    for(i=0;i<nrLinii;i++)
    {
    printf("%s ",linii[i]);
    printf("\n");
    }
return 0;
}