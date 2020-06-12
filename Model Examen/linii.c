//text pe mai multe linii, afiseaza doar liniile ce nu contin cifre
//afiseaza liniile cu o lungime<lungime data de la tastatura

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

char **linii=NULL;
int nr=0;

char* citire()
{
    char *buf=NULL;
    char *buf2;
    char ch;
    int n=0;
    for(;;){
        n++;
        buf2=(char*)realloc(buf,n*sizeof(char));
        if(buf2==NULL){
            free(buf);
            exit(1);
        }
        buf=buf2;
        ch=getchar();
        if(ch=='\n')
        {
            buf[n-1]='\0';
            return buf;
        }
        buf[n-1]=ch;
    }
}

int main()
{
    char **linii2;
    char *buf;
    int k,j,i,l;
    for(;;){
        
        buf=citire();
        if(strlen(buf)==0)
        {
            free(buf);
            break;
        }
        nr++;
        linii2=(char**)realloc(linii,nr*sizeof(char*));
        if(linii2==NULL)
        {

            exit(1);
        }
        linii=linii2;
        linii[nr-1]=buf;
        
    }
    
    for(i=0;i<nr;i++)
    {
        k=0;
        j=0;
        while(linii[i][j]!='\n'&&linii[i][j]!='\0')
        {
            if(strchr("0123456789",linii[i][j]))
            {
                k=1;
                break;
            }
            j++;
        }
        if(k==0) 
        {
           printf("%s\n",linii[i]);
        }
    }
    
    printf("l=");
    scanf("%d",&l);
    for(i=0;i<nr;i++)
    {
    if(strlen(linii[i])>l)
    printf("%s\n",linii[i]);
    }
    
    return 0;
}
