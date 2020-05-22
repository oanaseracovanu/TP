#include <stdio.h>
#include <stdlib.h>
#define MAX 500
int main()
{
char nume_sursa[80], nume_dest [80];
FILE *fs,*fd;
char buf[MAX];
int nr;
printf("Introduceti numele fisierului care se copiaza \n");
fgets(nume_sursa,20,stdin);
printf("Introduceti numele fisierului copie \n");
fgets(nume_dest,20,stdin);
if ((fs=fopen(nume_sursa, "rb"))==NULL) 
{
printf("Fisierul %s nu poate fi deschis\n", nume_sursa);
return -1;
}
if ((fd=fopen(nume_dest, "wb"))==NULL) 
{
printf("Fisierul %s nu poate fi deschis\n",nume_dest);
exit(1);
}
while (!feof(fs)) 
{
nr=fread(buf, 1, MAX, fs);
fwrite(buf, 1, nr, fd);
}
fclose(fs);
fclose(fd);
return 0;
}