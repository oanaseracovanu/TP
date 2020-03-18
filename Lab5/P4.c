#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define tpers 1
#define tmarfa 2

struct autovehicul
{
char aux;
union
{
int locuri;
double tonaj;
} capacitate;
float km;
char diesel;
char marca[];
};

void linii()
{
int car;
while ((car = getchar()) != EOF && car != '\n');
}
int main()
{
struct autovehicul *aut;
char buffer[100];
printf("Marca?");
fgets(buffer, 100, stdin);
buffer[strlen(buffer) - 1] = 0;
aut = (struct autovehicul *)
malloc(sizeof(struct autovehicul) + strlen(buffer) + 1);
if (!aut) {
printf("Eroare aloc memory.\n");
exit(EXIT_FAILURE);
}
strcpy(aut->marca, buffer);
printf("Tip (P - persoane, altceva - marfa)?");
fgets(buffer, 100, stdin);
if (toupper(buffer[0]) == 'P')
aut->aux = tpers;
else
aut->aux = tmarfa;
if (aut->aux == tpers)
{
printf("Nr. locuri?");
scanf("%d", &aut->capacitate.locuri);
}
else
{
printf("Tonaj?");
scanf("%lf", &aut->capacitate.tonaj);
}
printf("km parcursi?");
scanf("%f", &aut->km);
linii();
printf("Diesel (D - da, altceva - nu)?");
fgets(buffer, 100, stdin);
if (toupper(buffer[0]) == 'D')
aut->diesel = 1;
else
aut->diesel = 0;
printf("Marca: %s\n", aut->marca);
if (aut->aux == tpers)
printf("Transport persoane: %d locuri\n", aut->capacitate.locuri);
else
printf("Transport marfa: %.2lf tone\n", aut->capacitate.tonaj);
printf("%.2f km parcursi\n", aut->km);
if (aut->diesel)
printf("Diesel\n");
else
printf("Benzina\n");
free(aut);
return 0;
}