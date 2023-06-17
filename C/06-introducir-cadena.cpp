#include <stdio.h>

int main() {
	// declaramos la variable
	int size_cadena = 255;
	// char nombre[size_cadena];
	char *nombre = new char[size_cadena];
	// indicamos al usuario que porporcione el valor
	printf("Proporciona tu nombre: \n");
	// leer la informacion
	// el & solo se utiliza para los tipos simples como int, float, char, etc
	// los arreglos son un tipo de dato compuesto
	// por ello se pasa su referencia en automatico
	// sin agregar &
	scanf("%s", nombre);
	// imprimimos el valor
	printf("El nombre es: %s", nombre);
	return 0;
}

