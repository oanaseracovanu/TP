#include <stdio.h>
#include <stdlib.h>

int main(void)
{
FILE *f;
unsigned char c;
int rez;
f = fopen("fbin.dat","rb");
if (!f) 
{
perror("Eroare la deschiderea fisierului");
exit(EXIT_FAILURE);
}
while ((rez = fread(&c, sizeof(c), 1, f)) == 1) 
{
printf("%02X", c);
}
printf("\n");
fclose(f);
return 0;
}