#include <stdio.h>
#include <stdlib.h>
int main(void)
{
FILE *f;
unsigned int k;
int rez; 
f = fopen("fbin.dat", "rb");
if (!f) 
{
perror("Eroare la deschiderea fisierului");
exit(EXIT_FAILURE);
}
while ((rez = fread(&k, sizeof(k), 1, f)) == 1) 
{
printf("%08X", k);
}
printf("\n");
fclose(f);
return 0;
}