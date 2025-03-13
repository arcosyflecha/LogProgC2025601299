#include <stdio.h>
int main()
{
	const int COVER=500;
	const float DESC=0.25;
	int numMuj, numHom;
	float total;
	printf ("Cuantas mujeres son?");
	scanf("%d", &numMuj);
	printf ("Cuantos hombres son?");
	scanf("%d", &numHom);
	
	total=(numHom*COVER)+(numMuj*COVER)-(numMuj*COVER*DESC);
	printf("TOTAL=%f", total);
	return 0;
}