#include <stdio.h>
#include <math.h>
#include<string.h>

int main(void) 
{
    char sir[10];
    int n,i,j,k=0,lungime;
    float radacina;
    printf("Dati sirul: ");
    scanf("%s", sir);

    for (lungime= 0; sir[lungime] != '\0'; lungime++);
    radacina = sqrt(lungime);
    n = trunc(++radacina);
    char matrice[n][n];
    printf("Matricea este: \n");

    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n && lungime-k; j++, k++) 
        {
            if (sir[k] == ' ' || sir[k] == '\n') 
            {
                while(sir[k++] != ' ');
            }
            matrice[i][j] = sir[k];
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
}