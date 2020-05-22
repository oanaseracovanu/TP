#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *f;
    char nume[256], buffer[256];
    float pret;
    unsigned char lungime;

    f = fopen("preturi.dat", "wb");
    if (!f)
    {
        printf("Nu pot deschide fisierul");
        exit(EXIT_FAILURE);
    }

    do 
    {
        printf("Nume: ");
        fgets(nume,256, stdin);
        nume[strlen(nume) - 1] = '\0';
        if (strlen(nume)) 
        {
            printf("Pret: ");
            fgets(buffer,256, stdin);
            sscanf(buffer, "%f", &pret);
            lungime = strlen(nume);
            fwrite(&lungime, 1, 1, fout);
            fwrite(nume, strlen(nume), 1, fout);
            fwrite(&pret, sizeof(pret), 1, fout);
        }
    } while (strlen(nume) > 0);

    fclose(f);
    return 0;
}