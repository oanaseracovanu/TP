    #include<stdio.h>
    #include<stdlib.h>
    
int citire()
{
    int n=0;
    int *v=NULL;
    int *v2;                                        
    for(;;)
    {                                          
        int k;
        printf("Nr: ");
        scanf("%d",&k);
        if(!k)
        break;                             
        n++;
        if((v2=(int*)realloc(v,n*sizeof(int)))==NULL)
        {
            printf("memorie insuficienta\n");
            free(v);
            exit(EXIT_FAILURE);
        }
        v=v2;
        v[n-1]=k;                                  
    }
    return n;
}

void afisare(int n)
{
    int i,*v;
    for(i=0;i<n;i++)
    printf("%d ",*(v+i));
    printf("\n");
}

void afisare_inv(int n)
{
    int i,*v;
    for(i=n-1;i>=0;i--)
    printf("%d ",*(v+i));
    printf("\n");
    free(v);
}

int main()
{
    int *n;
    *n=citire();
    afisare(*n);
    afisare_inv(*n);
    return 0;
}