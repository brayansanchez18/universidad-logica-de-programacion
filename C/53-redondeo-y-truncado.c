#include <stdio.h>
#include <math.h>

int main() {
  // redondeo y truncado
  float numero = 8.6;
  int redondeo, truncado;

  // redondeo de numero
  redondeo = round(numero);
  printf("valor %.2f redondead = %d\n", numero, redondeo);

  // truncado
  truncado = trunc(numero);
  printf("valor %.2f truncado = %d\n", numero, truncado);

  return 0;
}