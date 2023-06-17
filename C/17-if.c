#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero;
	printf("porporciona un numero: ");
	scanf("%d", &numero);
	
	if (numero > 0) {
		printf("Valor positivo: %d", numero);
	}
	return 0;
}

