#include<stdio.h>
typedef struct angajat
{
	int cod_angajat;
	char* nume;
	char* prenume;
	struct
		{
		int an;
		char luna;
		char zi;
		}data_angajarii;
	float sal_incadrare;
}A;

int main()
{
    A x;
	x.cod_angajat=1021;
	x.nume="Popescu";
	x.prenume="Ioan";
	x.data_angajarii.an=2002;
	x.data_angajarii.luna=9;
	x.data_angajarii.zi=10;
	x.sal_incadrare=1250;
 
	printf("angajat: %s %s\n",x.nume,x.prenume);
	printf("data angajarii: %d/%d/%d\n",x.data_angajarii.zi, x.data_angajarii.luna, x.data_angajarii.an);
	printf("salariu incadrare: %.2f\n",x.sal_incadrare);
    return 0;
}
