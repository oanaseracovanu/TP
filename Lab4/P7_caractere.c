#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char sir[20][20];
    int i,n,s=0,k,j;
    printf("Cate caractere doriti sa cititi? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Introduceti: ");
        scanf("%s",sir[i]);
    }
    for(i=0;i<n;i++)
    printf("%s ",sir[i]);
    printf("\n");
    for(i=0;i<n;i++)
    {
        j=0;
        for(k=0;k<strlen(sir[i]);k++)
        {
        if(strchr("+-0123456789",sir[k]==0)) 
            j=1; 
        }
        if(j==1)
        {
        
            s=s+atoi(sir[i]);
        }
    }
    printf("Suma constantelor intregi din text este: %d ",s);
    return 0;
}