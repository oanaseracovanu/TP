#include<stdio.h>
#include<stdlib.h>
float maxim(float a, float b, float c)
{
	if (a > b&& a > c) return a;
	if (b > a&& b > c) return b;
		return c;
}

int main()
{
	float a, b, c;
	printf("a,b,c=\n");
	scanf("%f%f%f", &a, &b, &c);
	printf("Maximul dintre cele 3 numere este: %f", maxim(a, b, c));
	return 0;
}
