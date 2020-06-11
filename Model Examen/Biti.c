#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void binar(int nr)
{
    int i;
    for(i=15;i>=0;i--)
    printf("%d ",(nr>>i)&1);
    printf("\n");
}

int paritate(int nr)
{
    if((nr&1)==0)
    return 1;
    return 0;
}

void puterea_lanr(int nr)
{
    printf("%d \n",(1<<nr));
}

void cat_rest(int nr,int n)
{
    int s;
    printf("Catul: %d \n",(nr>>n));
    s=pow(n,2)-1;
    printf("Restul: %d \n",(nr&s));
}

int putere(int nr)
{
    if((nr&(nr-1))==0)
    return 1;
    return 0;
}

void bit_pe1(int nr,int bit)
{
    nr=nr|(1<<bit);
    binar(nr);
}

void bit_pe0(int nr, int bit)
{
    nr=nr & ~(1 << bit);
    binar(nr);
}

int cati_de1(int nr)
{
    int k=0;
    do 
    {
        nr= nr&(nr-1);
        k++;
    } while (nr);
    return k;
}

void complementare(int nr, int n)
{
    nr=nr ^ (1 << n);
    binar(nr);
}

int main()
{
    int nr,opt,n;
    printf("Dati nr: ");
    scanf("%d",&nr);
    do
    {
        printf("1.Reprezentare binara\n");
        printf("2.Paritate\n");
        printf("3.2 la puterea numarului introdus\n");
        printf("4.Catul si restul impartirii\n");
        printf("5.Nr este putere a lui 2?\n");
        printf("6.Pune bit pe 1\n");
        printf("7.Pune bit pe 0\n");
        printf("8.Numara bitii de 1\n");
        printf("9.Complementare bit\n");
        printf("10.Reprezentare in hexa\n");
        printf("0.Iesire\n");
        printf("Optiunea dumneavostra: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 0:
            exit(0);
            break;
            case 1:
            binar(nr);
            break;
            case 2:
            if(paritate(nr)==1)
            printf("Nr este par\n");
            else
            printf("Nr este impar\n");
            break;
            case 3:
            puterea_lanr(nr);
            break;
            case 4:
            printf("Nr la care doriti sa impartiti: ");
            scanf("%d",&n);
            cat_rest(nr,n);
            break;
            case 5:
            if(putere(nr)==1)
            printf("Nr este putere a lui 2\n");
            else
            printf("Nr nu este putere a lui 2\n");
            break;
            case 6:
            printf("Ce bit doriti sa schimbati? ");
            scanf("%d",&n);
            bit_pe1(nr,n);
            break;
            case 7:
            printf("Ce bit doriti sa schimbati? ");
            scanf("%d",&n);
            bit_pe0(nr,n);
            break;
            case 8:
            printf("%d \n",cati_de1(nr));
            break;
            case 9:
            printf("Ce bit doriti sa schimbati? ");
            scanf("%d",&n);
            complementare(nr,n);
            break;
            case 10:
            printf("%010x \n",nr);
            break;
            
        }

    } while (1);

    return 0;
}