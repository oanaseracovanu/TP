#include<stdio.h>
#include<stdlib.h>

char *alocare_char()
{
    char ch,*buf=NULL,*buf2;
    int n=0;
    for(;;)
    {
        n++;
        buf2=(char*)realloc(buf,n*sizeof(char));
        if(buf2==NULL)
        {
            printf("Nu se poate aloca memorie!\n");
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

int main()
{
    char *sir;
    int *n;
    sir=alocare_char();
    printf("%s\n ",sir);
    *n=alocare_vector();
    afisare_vector(*n);
    return 0;

}