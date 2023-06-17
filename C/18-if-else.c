#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero;
	
	printf("proporciona un numero");
	scanf("%d", &numero);
	
	if (numero > 0) {
		printf("valor positivo: %d", numero);
	} else {
		printf("valor negativo: %d", numero);
	}
	return 0;
}

