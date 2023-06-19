#include <stdio.h>
#include <stdlib.h>

int main() {
  // convertir de numero a cadena
  int edad = 28;
  char edadTexto[5];

  // itoa => int to Ascii
  // ftoa => float to Ascii
  // el valor 10 es sistema de numeracion decimal
  // itoa(valorNumerico, ArreglaDondeSeAlmacena[], SistemaDeNumeroacion);

  sprintf(edadTexto,"%d",edad);
  printf("Convirtiendo a texto: %s %s\n",edadTexto, "years");

  return 0;
}