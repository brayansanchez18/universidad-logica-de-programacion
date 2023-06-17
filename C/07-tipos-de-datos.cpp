#include <iostream>
#include <stdbool.h>
#include <stdio.h>
using namespace std;

int main() {
	// DEFINIMOS LAS VARIABLES A UTILIZAR
	int edad;
	bool empleadoConfianza;
	int empleadoConfianzaTemp;
	int largoCadena = 225;
	char *nombreCompleto = new char[largoCadena];
	float sueldo;
	
	// solicitamos los valores al usuario
	printf("Proporciona tu nombre: \n");
	// con %[^'\n']s indicamos que va a recuperar toda la lina
	//hasta que encuentre un salto de linea
	scanf("%[^'\n']s", nombreCompleto);
	printf("Proporciona tu edad: \n");
	scanf("%d", &edad);
	printf("Proporciona tu sueldo (USD): \n");
	scanf("%f", &sueldo);
	printf("Eres empleado de confianza? (1 = si, 0 = no)\n");
	scanf("%d", &empleadoConfianzaTemp);
	empleadoConfianza = empleadoConfianzaTemp;
	
	// imprimimos la informacion
	printf("\nLa informacion proporionada es: ");
	printf("\nNombre: %s", nombreCompleto);
	printf("\nEdad: %d", edad);
	printf("\nSueldo: $%.2f", sueldo);
	printf("\nEmpleado de confianza: %d",empleadoConfianza);
	return 0;
}

