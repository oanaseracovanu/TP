#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024
int main(void)
{
FILE *fin, *fout;
unsigned char buffer[SIZE];
int rez;/* Deschidem fisierul sursa pentru citire binara. */
fin = fopen("a.dat", "rb");
if (!fin) 
{
perror("Nu pot deschide fisierul sursa");
exit(EXIT_FAILURE);
} 
fout = fopen("b.dat", "wb");
if (!fout) 
{
perror("Nu pot deschide fisierul destinatie");
exit(EXIT_FAILURE);
}
while ((rez = fread(buffer, 1, SIZE, fin)) >0) 
{
fwrite(buffer, 1, rez, fout);
}
fclose(fin);
fclose(fout);
return 0;}