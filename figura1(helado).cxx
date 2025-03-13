#include <stdio.h>
#include <math.h>
int main()
{
	float l, c, r, h, cuad, rect, cuadri, at, pt, pc;
	l=7;
	rect= (((3*l))*l)*3;
	r= (3*l)/2.0;
	c= (3.1416*pow(r,2))/2.0;
	at= rect+c;
	h= sqrt(pow(21,2) + pow(l,2))*2.0;
	pc= (2*3.1416*r)/2.0;
	pt= 7*l+ h+ pc;
	printf("El perimetro total es = %f", pt);
	printf("\nEl area total es = %f", at);
	return 0;
}