#include <stdio.h>
void linieOrizontala(int n)
{
int i;
for (i = 0; i< n; i++)
printf("*");
printf("\n");
}
void linieVerticala(int n)
{
int i;
for (i = 0; i< (n - 3) / 2; i++)
printf("*\n");
}
int main()
{
int n;
printf("n=");
scanf("%d", &n);
linieOrizontala(n); 
linieVerticala(n); 
linieOrizontala(n);
linieVerticala(n); 
linieOrizontala(n); 
return 0;
}