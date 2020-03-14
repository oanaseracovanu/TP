#include <stdio.h>
#include <stdlib.h>
int prim(int n,int d)
{
    if (d==1)
        return 1;
    else if(n%d==0)
        return 0;
    else
        return prim(n,d-1);
}
void formarevect(int v[50],int n)
{
      int i,k=0,j;
      for(i=1;i<n;i++)
      {
          if(prim(i,i/2)==1) v[k]=i;
          k++;
      }
   for(j=1;j<k;j++)
    printf("%d",v[j]);
}
int main()
{
    int v[50],n;
    scanf("%d",&n);
    formarevect(v,n);
    return 0;
}
