#include <stdio.h>
#include <math.h>
int main()
{
	float l, c, cuad, r, rect, cuadri, pc, pr, pcuad, at, pt;
	l=7;
	r=l/2.0;
	c=(3.1416* pow(r,2))/2.0;
	cuad= l*l;
	rect= (((3.0/5.0)*l)*(l/5.0))*2;
	cuadri= pow((l/5.0),2)*2;
	at= cuad+rect+cuadri+c;
	pc=(2*3.1416*r)/2;
	pcuad= 23*(l/5);
	pt= pc+pcuad;
	printf("El perimetro total es = %f", pt);
	printf("\nEl area total es = %f", at);
	return 0;
}