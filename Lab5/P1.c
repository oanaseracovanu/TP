#include <stdio.h>
union intreg_real
{
int i;
double r;
};

int main()
{

union intreg_real u;
printf("un intreg va ocupa: %d\n", sizeof(int));
printf("un real va ocupa: %d\n", sizeof(double));
printf("un union va ocupa: %d\n", sizeof(union intreg_real));
u.i = 100;
printf("%d %lf\n", u.i, u.r);
u.r= 12.12;
printf("%d %lf\n", u.i, u.r);
return 0;
}