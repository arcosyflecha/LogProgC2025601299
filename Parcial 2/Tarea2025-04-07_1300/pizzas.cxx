#include <stdio.h>
int main()
{
	int pizza, ing, ingr;
	printf ("Elije tu pizza: (1-. Vegetariana, 2-. NO vegetariana)\n");
	scanf("%d", &pizza);
	if (pizza>2) {
		printf ("No disponible\n");
	}
	else if (pizza==1){
			printf ("Escoge tu ingrediente: 1-. Pimiento 2-. Tofu\n");
		scanf ("%d", &ing);
	}
			if (ing==1){
			printf ("Orden: Pizza vegetariana con pimiento, mozzarella y tomate");
		}
			else if (ing==2){
			printf ("Orden: Pizza vegetariana con tofu, mozzarella y tomate");
		}
	else if (pizza==2){
		printf ("Escoge tu ingrediente: 1-. Pepperoni, 2-.Jamon, 3-.Salmon\n");
		scanf ("%d", &ingr);
	}
			if(ingr==1){
				printf ("Orden: Pizza no vegetariana con pepperoni, mozzarella y tomate");
			}
			else if (ingr==2){
				printf ("Orden: Pizza no vegetariana con jamón, mozzarella y tomate");
			}
			else if (ingr==3){
				printf ("Orden: Pizza no vegetariana con salmón, mozzarella y tomate");
			}
	return 0;
}