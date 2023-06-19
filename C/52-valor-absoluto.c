#include <stdio.h>
#include <stdlib.h>

int main() {
  // valor absoluto
  int numero, numeroAbs;
  printf("proporciona un valor numerico: \n");
  scanf("%d", &numero);
  numeroAbs = abs(numero);
  printf("valor absoluto de %d es: %d\n", numero, numeroAbs);

  return 0;
} 