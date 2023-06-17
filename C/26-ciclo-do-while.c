#include <stdio.h>
#include <stdbool.h>
int main() {
	// do-while
	// Repetir hasta que sea un valor positivo
	int numero;
	bool condicion;
	do{
		printf("\nProporcione un numero positivo: \n");
		scanf("%d", &numero);
		condicion = numero > 0; 
		// se repite mientras NO sea positivo
	} while( !condicion );
	// termina el ciclo
	printf("\nValor positivo proporcionado: %d", numero);
	
	
	return 0;
}

