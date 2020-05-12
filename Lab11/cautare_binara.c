#include<stdio.h>
#define n 15
int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int comp = 0;

int cautare_binara(int a[], int x)
{
	int s, d, m;
	s = 0; d = n - 1;
	do
	{
		m = (s + d) / 2;
		if (x > a[m]) s = m + 1;
		else
			d = m - 1;
            comp++;
	} while (a[m] != x && s <= d);
	return m;
}

int main()
{
    int x;
	printf("Elementul pe care doriti sa il cautati: ");
	scanf("%d", &x);
    if (a[cautare_binara(a,x)] == x) printf("Elementul a fost gasit la pozitia %d\n", cautare_binara(a,x));
	else
	printf("Elementul nu a fost gasit\n");
    return 0;
}