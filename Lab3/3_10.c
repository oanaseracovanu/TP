#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void adaugare(int *n, int* v)
{
	int i;
	for (i = 0; i < *n; i++)
	{
		printf("Valoarea pe care doriti sa o adaugati in vector ");
		scanf("%d", v + i);
	}
}

void afisare(int *n, int* v)
{
	int i;
	for (i = 0; i < *n; i++)
		printf("%d ", *(v + i));
	printf("\n");
}

void stergere(int *n, int* v, int nr)
{
		int i, j, k = 0;
		for (i = 0; i <= (*n - k); i++)
			if (*(v + i) == nr)
			{
				k++;
				for (j = i; j <= (*n - k); j++)
					*(v + j) = *(v + j + 1);
				i--;
			}
		*n = *n - k;

}

int main()
{
	int n, v[10], opt,nr;
	printf("Dati dimensiunea vectorului");
	scanf("%d", &n);
	do
	{
		printf("1.Citire\n");
		printf("2.Afisare\n");
		printf("3.Stergere\n");
		printf("4.Iesire\n");
		printf("Optiunea dumneavoastra este:\n");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1:
			adaugare(&n, v);
			break;
		case 2:
			afisare(&n, v);
			break;
		case 3:
			printf("Dati valoarea pe care doriti sa o stergeti din vector\n");
			scanf("%d", &nr);
			stergere(&n, v, nr);
			afisare(&n, v);
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Optiunea dumneavoastra este gresita!");
			break;
		}
	} while (1);
	return 0;
}
