#include <stdio.h>
#include <math.h>
int main()
{
	float rest;
	float x=3.0;
	float A= ((1.0)/2.0)*x;
	float B= (3+x)/2.0;
	float C= 2*(pow (x, 2));
	float D= (2.0+3.0)*x;
	rest= (A + B*C)/D;
	printf ("Rest=%f", rest);
	return 0;
}