#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void adresa_mica(double a, double b)
{
	double* p,* q;
	p = &a;
	q = &b;
	if (p < q) printf("Variabila care se afla la adresa cea mai mica de memorie este 'a'");
	else
		printf("Variabila care se afla la adresa cea mai mica de memorie este 'b' ");

}

int main()
{
	double a, b;
	printf("a= ");
	scanf("%lf", &a);
	printf("b= ");
	scanf("%lf", &b);
	adresa_mica(a, b);
	return 0;
}
