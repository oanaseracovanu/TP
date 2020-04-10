#include<stdio.h>
#include<stdlib.h>

int dimensiune_sir(char *sir)
{
    int i;
    while(sir[i]!='\0') i++;
    return i;
}

int strchr(char *sir,char c)
{
    int i=0,k=0;
    while(sir[i]!='\0')
    {
    if(sir[i]==c) 
    k++;
    i++;
    }
    return k;
}

int strcmp(const void *sir1, const void *sir2)
{
    int x=*(int*)sir1-*(int*)sir2;
    if(x>0) return 1;
    if(x==0) return 0;
    return -1;
}

int strstr(char *sir, char *sub)
{
    int i=0,x=0;
    while(sir[i]!='\0')
    {
        if(sir[i]==sub[x]) 
        x++;
        else
        x=0;
        if(sub[x]=='\0')
        return i;
        i++;
    }
    return -1;
}

int main()
{
    char sir[32]={'a','b','\0'};
    char sir2[32]={'a','b','b','\0'};
    printf("%lu\n%d\n%d\n%d\n",strlen(sir),strchr(sir2,'b'),strcmp(sir,sir2),strstr(sir2,sir));
    return 0;
}