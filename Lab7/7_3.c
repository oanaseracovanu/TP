#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *alocare()
{
    char ch;
    char *buf=NULL;
    char *buf2;
    int n=0;
    for(;;)
    {
        n++;
        buf2=(char*)realloc(buf,n*sizeof(char));
        if(buf2==NULL)
        {
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
    return buf;
}

char *concatenare(char sir1[], char sir2[])
{
    char *sir=alocare();
    strcpy(sir,sir1);
    strcat(sir," ");
    strcat(sir,sir2);
    return sir;
}

int main()
{
    char *sir1=alocare(),*sir2=alocare();
    printf("Primul sir: ");
    scanf("%s",sir1);
    printf("Al doilea sir: ");
    scanf("%s",sir2);
    printf("Rezultat: %s\n",concatenare(sir1,sir2));
    return 0;
}