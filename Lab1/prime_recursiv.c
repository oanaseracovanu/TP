#include<stdio.h>
#include<stdlib.h>

int prime(int n, int d)
{
	if (d == 1)
		return 1;
	if (n % d == 0) return 0;
	return prime(n, d - 1);
}

int main()
{
	int n,k,j;
	printf("Cate numere doriti sa verificati?\n");
	scanf("%d", &k);
	for (j = 0; j < k; j++)
	{
		printf("n=\n");
		scanf("%d", &n);
		if (prime(n, n / 2) == 1) printf("Numarul este prim\n");
		else
			printf("Numarul nu este prim\n");
	}
	return 0;

}
