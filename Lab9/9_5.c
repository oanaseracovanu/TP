#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define LEN 100

int main(void)
{
    char nume_fisier[LEN];
    FILE *f;
    int c;
    printf("Numele fisierului? ");
    fgets(nume_fisier, LEN, stdin);
    nume_fisier[strlen(nume_fisier) - 1] = 0;
    f = fopen(nume_fisier, "w");
    if (!f) 
    {
    perror("Eroare la deschiderea fisierului");
    exit(EXIT_FAILURE);
    }
    while ((c = getchar()) != EOF && !isspace(c)) 
    fputc(c, f);
    fclose(f);
    return 0;
}