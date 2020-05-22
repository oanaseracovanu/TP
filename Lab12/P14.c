#include <stdio.h>
#include <stdlib.h>

char decodificare(unsigned char pixel)
{
    if (pixel == 0)
    return ' ';
    if (pixel == 255)
    return '#';
    if (pixel < 255 / 2)
    return '.';
    else
    return 'o';
}

int main()
{
    FILE *f;
    int i, j;
    unsigned short w, h;
    unsigned char pixel;
    if((f = fopen("fisier.dat", "rb"))==NULL)
    {
        perror("Eroare deschidere fisier\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        while(!feof(f))
        {
        fread(&w, sizeof(w), 1, f);
        fread(&h, sizeof(h), 1, f);
        for (i = 0; i < h; i++) 
        {
        for (j = 0; j < w; j++) 
        {
            fread(&pixel, 1, 1, f);
            printf("%c", decodificare(pixel));
        }
        printf("\n");
        }
        }
    }
        fclose(f);
    return 0;
}