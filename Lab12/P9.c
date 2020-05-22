#include <stdio.h>
#include <stdlib.h>
int main(void)
{
FILE *f;
unsigned char c;
long int len;
f = fopen("a.dat", "rb");
if (!f) 
{
perror("Nu pot deschide fisierul");
exit(EXIT_FAILURE);
}
printf("Pozitii pare: ");
while (1 == fread(&c, 1, 1, f))
{
printf("%02x", c);
fseek(f, 1, SEEK_CUR);
}
printf("\n");
fseek(f, -1, SEEK_END);
len = ftell(f);
if (len % 2 == 0)
fseek(f, -1, SEEK_CUR);
printf("Pozitii impare: ");
while (1) 
{
len = ftell(f);
fread(&c, 1, 1, f);
printf("%02x", c);
if (len == 1)
break;
fseek(f, -3, SEEK_CUR);
}
printf("\n");
fclose(f);
return 0;
}