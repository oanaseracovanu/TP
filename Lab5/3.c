#include<stdio.h>
#include<math.h>
typedef struct
{
float a;	
float b;	
}complex;	

void citire(complex* z,char s[])
{
	printf("Introducem nr. complex %s:\n",s);
	printf("\tpartea reala: ");
	scanf("%f",&(*z).a);
	printf("\tpartea imaginara: ");
	scanf("%f",&z->b);
}
void afisare(complex z,char s[])
{
	printf("Nr. complex %s: ",s);
	if(z.b>=0)
	printf("%.2f+%.2fi\n",z.a,z.b);
	else
	printf("%.2f%.2fi\n",z.a,z.b);
}

float modul(complex z)
{
	return sqrt(pow(z.a,2)+pow(z.b,2));
}

complex conjugat(complex z)
{
	complex t;
	t.a=z.a;
	t.b=-z.b;
	return t;
}

complex suma1(complex x,complex y)
{
	complex z;
	z.a=x.a+y.a;
	z.b=x.b+y.b;
return z;
}

void suma2(complex x,complex y,complex* z)
{
	z->a=x.a+y.a; //(*z).a=x.a+y.a;
	z->b=x.b+y.b;
} 

complex produs(complex x,complex y)
{
	complex z;
	z.a=x.a*y.a-x.b*y.b;
	z.b=x.a*y.b+x.b*y.a;
	return z;
}

int main()
{
	complex z1,z2;
	citire(&z1,"z1");
	citire(&z2,"z2");
	afisare(z1,"z1");
	afisare(z2,"z2");
	printf("\n");
	printf("Modulul lui z1: %.2f\n",modul(z1));
	printf("Modulul lui z2: %.2f\n",modul(z2));
	printf("\n");
	afisare(conjugat(z1),"conjugat z1");
	afisare(conjugat(z2),"conjugat z2");
	complex s1;
	s1=suma1(z1,z2);
	afisare(s1,"z1+z2");
	complex s2;
	suma2(z1,z2,&s2);
	afisare(s2,"z1+z2");
	complex p;
	p=produs(z1,z2);
	afisare(p,"z1*z2");
    return 0;
}