#include <stdio.h>
#include <stdlib.h>
int main(void)
{
FILE *f;
int i;
unsigned char c;
f = fopen("fbin.dat", "wb");
if (!f)
{
perror("Eroare la deschiderea fisierului");
exit(EXIT_FAILURE);
}

for (i = 0; i< 17; i++) 
{
c = i;
fwrite(&c, 1, 1, f);
fwrite(&c, 1, 1, f);
}

fclose(f);
return 0;
}