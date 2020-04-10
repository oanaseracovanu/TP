#include<stdio.h>

void interschimba(int *pa, int *pb)
{
    int aux=*pa;
    *pa=*pb;
    *pb=aux;
}

int main()
{
    int x,y;
    printf("Primul nr: ");
    scanf("%d",&x);
    printf("Al doilea nr: ");
    scanf("%d",&y);
    interschimba(&x,&y);
    printf("Dupa interschimbare: %d %d\n",x,y);
    return 0;
}