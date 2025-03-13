#include <stdio.h>
#include <math.h>
int main(){
	float pago=100.00;
	float ISR= 0.1;
	float desc, sbruto, sneto;
	int horas;
	printf("¿Cuantas horas trabajo? \n");
	scanf("%d", &horas);
	sbruto=horas*pago;
	desc=sbruto*ISR;
	sneto=sbruto-desc;
	printf("%f \n", sbruto);
		printf("%f \n", desc);
		printf("%f \n", sneto);
}