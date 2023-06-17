#include <stdio.h>

int main()
{
  // declaramos una variable
  int miNumero;
  // la inicializamos
  miNumero = 10;
  // imprimimos la variable
  // formato %d -> decimal
  printf("mi numero es: %d", miNumero);

  // declaramos e inicializamos la variable en la misma linea
  // se puede declarar mas de una variable siempre y cuando estan sean del mismo tipo
  int miNumero2 = 20, miNumero3 = 30;
  printf("\n Mi numero dos es: %d, mi numero tres es: %d", miNumero2, miNumero3);
}