#include <stdio.h>
#define tip_intreg 1
#define tip_real 2
struct uniune_auxiliar
{
char aux;
union
{
int i;
double r;
} u;
};
int main()
{
struct uniune_auxiliar uaux;
uaux.u.i = 100;
uaux.aux = tip_intreg;
printf("%d %lf\n", uaux.u.i, uaux.u.r);
uaux.u.r = 12.12;
uaux.aux= tip_real;
printf("%d %lf\n", uaux.u.i, uaux.u.r);
return 0;
}