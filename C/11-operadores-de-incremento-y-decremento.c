#include <stdio.h>

int main() {
	int a,b,c;
	a = 0;
	// operadores de incremento: pre-incremento y post-incremento
	a++; // se incrementa la ultima vez que usemos la variable
	printf("nuevo valor de a: %d", a);
	
	// PRE-INCREMENTO
	++a;
	printf("\nNuevo valor de a: %d", a);
	
	// ejemplo
	a = 5;
	b = 2;
	c = ++a * b++;
	printf("\nValor a: %d", a); // no tenia pendiente ningun incremento
	printf("\nValor b: %d", b); // si tenia pendiente un incremento
	printf("\nValor c: %d", c);
	
	// operador decremento: pre-decremento y post-decremento
	a = 5;
	b = 2;
	c = --a * b--;
	printf("\nValor de c: %d", c);
	return 0;
}

