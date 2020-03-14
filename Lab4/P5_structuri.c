#include<stdio.h>
#include<stdlib.h>
typedef struct produs
{
    char nume[30];
    float pret;
}P;

int exista(char denumire[20], P *p, int n)
{
    int i;
    for(i = 0; i < n; i++) 
       if( strcmp(p[i].nume, denumire) == 0) 
          return i;
    return -1;
}

int main()
{
   P p[50];
	int i,opt,n=0,index;
    char denumire[20];
	
	while(1) {
        printf("1.Introducere\n");
        printf("2.Afisare\n");
        printf("0.Iesire\n");
		printf("Operatia:\n"); 
        scanf("%d", &opt);
		switch (opt){
            case 1:
                getchar();
                printf("Nume: "); 
                scanf("%s", denumire);
                index = exista(denumire,p,n);
                if(index >= 0) 
                {
                    printf("Pretul nou: "); scanf("%g", &p[index].pret);
                    n--;
                } 
                else 
                {
                    strcpy(p[n].nume, denumire);
                    printf("Pretul: "); scanf("%g", &p[n].pret);
                }
                n++;
                break;
            case 2:
                for(i = 0; i < n; i++) {
                    printf("%s %g\n", p[i].nume, p[i].pret);
                }
                break;
            case 0: return 0;
            default: 
                printf("Optiunea nu exista!\n");
            break;
		}
	}
}