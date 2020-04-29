#include<stdio.h>

void distanta(int n, int v[][10])
{
	int i,j;
	for(i=0;i<n;i++)
		for (j = 0; j < n; j++)
		{
			printf("Distanta dintre orasul %d si orasul %d este: ", i, j);
			scanf("%d", &v[i][j]);
		}


}

void minim(int n, int v[][10])
{
	int i, j;
	int min = v[0][0];
	for (i = 0; i < n; i++)
		for(j=0;j<n;j++)
	{
		if (v[i][j] == 0) break;
		if (v[i][j] < min) min = v[i][j];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			if (v[i][j] == min) printf("Drumul cel mai apropiat este intre orasul %d si orasul %d", i,j);
	}

}

int main()
{
	int v[10][10], n;
	printf("Nr de orase ");
	scanf("%d", &n);
	distanta(n, v);
	minim(n, v);
	return(0);
}
