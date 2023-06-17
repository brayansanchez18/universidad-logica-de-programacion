#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero;
	printf("proporciona un numero \n");
	scanf("%d", &numero);
	// operador ternario
	// (expresion) ? "verdadero" : "falso";
	(numero > 0) ? printf("valor positivo") : printf("valor negativo");
	return 0;
}

