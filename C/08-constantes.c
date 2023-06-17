#include <stdio.h>
#define PI 2.1416
#include <math.h>
int main() {
	// definimos constantes en c
	const int MI_CONSTANTE = 10;
	
	//imrprimimos constantes
	printf("Valor constante = %d", MI_CONSTANTE);
	printf("\nValor PI = %.4f", PI);
	printf("\nValor PI Math = ", M_PI);
	
	// constante segundo por minuto
	const int SEGUNDOS_POR_MINUTO = 60;
	printf("\nConstante SEGUNDOS_POR_MINUTO = %d", SEGUNDOS_POR_MINUTO);
	return 0;
}

