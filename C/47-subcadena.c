#include <stdio.h>

int main() {
  // obtener una subcadena
  // strncpy

  char cadena[] = "Hola mundo";
  char subcadena[10];

  // copiamos apartir de la cadena de inicio
  // e indicamos cuantos caracteres se copian
  int inicio = 0, nCaracteres = 4;

  // void *strncpy(void *destino, const void *origen, tamanio number);
  strncpy(subcadena, &cadena[inicio], nCaracteres);
  subcadena[nCaracteres] = '\0';
  printf("Cadena original: %s\n", cadena);
  printf("Subcadena: %s\n", subcadena);

  return 0;
}