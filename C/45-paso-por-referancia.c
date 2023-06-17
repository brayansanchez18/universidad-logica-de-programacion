#include<stdio.h>

void cambiarValor(int *parametro){
	*parametro = 20;
}

int main() {
	//Ejemplo de paso por referencia
	int argumento = 10;
	printf("Antes llamar funcion: %d", argumento);
	cambiarValor( &argumento );
	printf("\nDespues llamar funcion: %d", argumento);
	
	return 0;
}

// CONTRARIO AL PASO POR VALOR EL PASO POR REFERENCIA SI AFECTA EL VALOR DE LA
// LA FUNCION PRINCIPAL
// CUALQUIER CAMBIO YA SEA DESDE LA FUNCION PRINCIPAL O CUALQUIER
// OTRA FUNCION AFECTARA EL VALOR DE LAS VARIABLES QUE PASEMOS COMO PARAMETROS
