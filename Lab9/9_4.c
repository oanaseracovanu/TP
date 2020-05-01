#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define LEN 100
#define CHARS 50

int main(void)
{
    char nume_fisier[LEN];
    FILE *f;
    int i, c;
    printf("Numele fisierului? ");
    fgets(nume_fisier, LEN, stdin);
    nume_fisier[strlen(nume_fisier) - 1] = 0;
    f = fopen(nume_fisier, "rt");
    if (!f) 
    {
    perror("Eroare la deschiderea fisierului");
    exit(EXIT_FAILURE);
    }

    for (i = 0; i < CHARS; i++) 
    {
    c = fgetc(f);
    if (c == EOF) 
    break;
    else 
    putchar(c);
    }
    putchar('\n');
    fclose(f);
    return 0;
}