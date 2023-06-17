#include <stdio.h>

int main() {
	const int EDAD_ADULTO = 18;
	int edad;
	printf("proporciona tu edad: \n");
	scanf("%d", &edad);
	
	if (edad >= EDAD_ADULTO) {
		printf("la persona con edad %d es un adulto", edad);
	} else {
		printf("la persona con edad %d es menor de edad", edad);
	}
	return 0;
}

