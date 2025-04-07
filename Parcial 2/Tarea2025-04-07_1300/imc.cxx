#include <stdio.h>
int main()
{
	float m, kg, imc;
	printf ("Indica tu altura y posteriormente tu peso\n");
	scanf("%f", &m);
	scanf("%f", &kg);
	imc= kg/(m*m);
	printf ("Tu imc es %f \n", imc);
	if (imc<=0){
		printf("ERROR");
	}
	else if (imc<=18.4){
		printf ("Bajo peso");
	}
	else if (imc>=18.5 && imc<=24.9){
		printf ("Normal");
	}
	else if (imc>=25 && imc<=29.9){
		printf ("Sobrepeso");
	}
	else if (imc>=30 && imc<=34.9){
		printf ("Obesidad clase 1");
	}
	else if (imc>=35 && imc<=39.9){
		printf ("Obesidad clase 2");
	}
	else if (imc>=40){
		printf ("Obesidad clase 3");
	}

	return 0;
}