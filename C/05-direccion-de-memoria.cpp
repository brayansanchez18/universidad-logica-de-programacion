#include <stdio.h>

int main(int argc, char *argv[]) {
	int miNumero =10;
	
	// imprimimos la variable
	printf("Imprimir el valor de la variable: %d", miNumero);
	// %p -> pointer
	printf("\n Imprimir la direccion de memoria de la varible: %p", &miNumero);
	
	// INTRODUCIR DATOS EN C
	printf("\nProporciona un numero: \n");
	scanf("%d", &miNumero);
	printf("\nEl numero proporcionado es: %d", miNumero);
	
	return 0;
}

