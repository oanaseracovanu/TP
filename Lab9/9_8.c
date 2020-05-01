#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *f;
    FILE *g;
    char cuv[500];
    char aux[500];
    int i;

    if ((f = fopen("9_8.txt", "rt")) == NULL || (g = fopen("9_8_dest.txt", "wt")) == NULL)
        printf("Unul din fisiere nu poate fi deschis!");
    else
        while (!feof(f))
        {
            fgets(cuv, 500, f);
            strcpy(aux,cuv);
            for (i = 0; cuv[i] != '\0'; i++); 
            cuv[i-1] = '"'; 
            for(i=0;cuv[i]!='\0';i++)
            aux[i+1]=cuv[i];
            aux[0]='"';
            fprintf(g, "%s\n", aux); 
        }

    fclose(f);
    return 0;
}