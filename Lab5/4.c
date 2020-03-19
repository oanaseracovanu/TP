#include<stdio.h>
#include<math.h>
typedef struct
{
	int a,b;

}rational;
void citire(rational* x, char c)
{
	printf("Dati numarul rational %c:\n",c);
	printf("\tnumaratorul: ");
	scanf("%d",&x->a);
	int n;
	do
	{
		printf("\tnumitorul: ");
		scanf("%d",&n);
	}
	while(n==0);
	x->b=n;
}
 
void afisare(rational x, char c[])
{
	printf("Numarul rational %s: %d/%d\n",c,x.a,x.b);
}
rational adunare(rational x, rational y)
{
	rational r;
	r.a=x.a*y.b+x.b*y.a;
	r.b=x.b*y.b;
	return r;
}
rational inmultire(rational x, rational y)
{
	rational r;
	r.a=x.a*y.a;
	r.b=x.b*y.b;
	return r;
}
void main()
{
	rational x,y;
 
	citire(&x,'x');
	citire(&y,'y');
 
	afisare(x,"x");
	afisare(y,"y");
 
	rational s;
	s=adunare(x,y);
	afisare(s,"x+y");
 
	rational p;
	p=inmultire(x,y);
	afisare(p,"x*y");
 
	getchar();
	int k;
	scanf("%d", &k);
}