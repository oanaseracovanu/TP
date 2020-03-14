#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float angle(float x0, float y0, float x1, float y1)
{
	float l, v;
	float const pi = 3.14;
	v = 180.0 / pi;
	l = (y1 - y0) / (x1 - x0);
	return atan(fabs(l)) * v;
}

int main()
{
	float x0, y0, x1, y1;

	printf("x0,y0,x1,y1=\n");
	scanf("%f%f%f%f", &x0,&y0,&x1,&y1);
    printf("%.2f grade\n", angle(x0, y0, x1, y1));
	return 0;
}
