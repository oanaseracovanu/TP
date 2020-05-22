#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{ 
FILE *ftxt, *fbin;
int k = 2000011;
char s[] = "doua milioane unsprezece";
ftxt = fopen("out.txt", "wt");
if (!ftxt) 
{
perror("Eroare la deschiderea fisierului text");
exit(EXIT_FAILURE);
}
fbin = fopen("out.dat", "wb");
if (!fbin) 
{
perror("Eroare la deschiderea fisierului binar");
exit(EXIT_FAILURE);
}
fprintf(ftxt, "%d%s", k, s);
fwrite(&k, sizeof(k), 1, fbin);
fwrite(s, 1, strlen(s), fbin);
fclose(ftxt);
fclose(fbin);
return 0;
}