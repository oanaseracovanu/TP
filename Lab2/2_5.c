#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#define col 4
#define lin 4

void citire(int m1[][30])
{
	int i, j;
	for(i=0;i<lin;i++)
		for (j = 0; j < col; j++)
		{
			printf("m[%d][%d]= ", i, j);
			scanf("%d", &m1[i][j]);
		}
}

void afisare(int m1[][30])
{
	int i, j;
	for (i = 0; i < lin; i++)
	{
		for (j = 0; j < col; j++)
			printf("%d ", m1[i][j]);
			printf("\n");
	}
}

void transpusa(int m1[][30])
{
	int m2[30][20], i, j;
	for (i = 0; i < lin; i++)
		for (j = 0; j < col; j++)
			m2[i][j] = m1[j][i];
	for (i = 0; i < lin; i++)
	{
		for (j = 0; j < col; j++)
			printf("%d ", m2[i][j]);
		printf("\n");
	}
}

int main()
{
	int m1[20][30];
	citire(m1);
	afisare(m1);
	printf("\n");
	transpusa(m1);
	return(0);
}
