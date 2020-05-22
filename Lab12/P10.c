#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
int main(void)
{
FILE *f;
char line[SIZE];
f = fopen("a.txt", "rt");
if (!f) 
{
perror("Nu pot deschide fisierul");
exit(EXIT_FAILURE);
}
while (!feof(f)) 
{
fgets(line, SIZE, f);
printf("%s", line);
}
fclose(f);
return 0;}