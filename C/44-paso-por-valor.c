#include<stdio.h>

void cambiarValor(int parametro){
	parametro = 20;
}

int main() {
	//Ejemplo de paso por valor
	int argumento = 10;
	printf("Antes llamar funcion: %d", argumento);
	cambiarValor( argumento );
	printf("\nDespues llamar funcion: %d", argumento);
	
	return 0;
}

// CUALQUIER CAMBIO QUE HAGAMOS EN LA FUNCION NO AFECTARA EN NADA
// A LA FUNCION PRINCIPAL YA QUE SOLO SE MANDO UNA COPIA DEL VALOR
// A LA FUNCION Y A ESTO SE LE CONOCE COMO PASO POR VALOR
