#include<stdio.h>

int main()
{
    int v[10],*end=v,*p,i,n,k,aux;
    
    printf("Dimensiunea vectorului: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("v[%d]: ",*end);
        scanf("%d",end);
        end++;
    }

    for(p=v;p<end;p++)
    printf("%d ",*p);
    printf("\n");

    do
		{
			k = 1;
			for (p=v;p<=end;p++)
			if (*(p-1) > *p)
			{
				aux = *(p-1);
				*(p-1) = *p;
				*p = aux;
				k = 0;
			}

		} while (!k);

    for(p=v+1;p<=end;p++)
    printf("%d ",*p);
    return 0;
}