#include <stdio.h>

int main() {
	// operadores de asignacion
	// operador = para asignar un valor
	int miNumero = 10;
	printf("Valor miNumero: %d", miNumero);
	miNumero = 20;
	printf("\nValor miNumero: %d", miNumero);
	
	// operador +=
	miNumero += 5; // miNumero = miNumero + 5;
	printf("\nValor miNumero: %d", miNumero);
	
	// operador -=
	miNumero -= 3; // miNumero = miNumero - 3;
	printf("\nValor miNumero: %d", miNumero);
	
	// operador *=
	miNumero *= 5; // miNumero = miNumero * 5;
	printf("\nValor miNumero: %d", miNumero);
	
	// operador /=
	miNumero /= 5; // miNumero = miNumero / 5;
	printf("\nValor miNumero: %d", miNumero);
	
	// operador %= (modulo o residuo de divicion)
	miNumero %= 5; // miNumero = miNumero % 5;
	printf("\nValor miNumero: %d", miNumero);
	return 0;
}

