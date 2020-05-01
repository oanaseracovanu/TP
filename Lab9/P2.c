#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    FILE *f;
    f = fopen("/stud/lab/mess","wt");

    if (!f) 
    {
    perror("Eroare la deschiderea fisierului");
    exit(EXIT_FAILURE);
    } 

    fclose(f);
return 0;}
