#include <stdio.h>
#include <stdlib.h> // libreria standar

int main() {
  // convertir string a numero
  char cadena1[] = "10";
  char cadena2[] = "20";

  // int atoi(const char *cadena);
  // atoi => Ascii to int
  // atof => Ascii to float
  // si no es un numero en automatico regresa el valor de 0
  int resultado = atoi(cadena1) + atoi(cadena2);
  printf("resultado suma: %d\n", resultado);
  return 0;
}