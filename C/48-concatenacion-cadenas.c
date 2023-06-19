#include <stdio.h>
#include <string.h>
int main() {
  // la cadena destino debe de lo suficientemente grande para soportaar
  // el resultado

  char destino[11] = "Hola ";
  char origen[] = "Mundo";

  // concatenamos las cadenas
  // char *strcat(char *destino, cnost char *origen)

  // 1 tomar la cadena destino
  // 2 encuentra el caracter nulo en la cadena destino
  // 3 copia la cadena origen comenzando en la caracter nulo de la cadena destino
  // 4 agrega el caracter nulo a la cadena destino '\0'

  strcat(destino, origen);
  printf("concatenacion de cadenas: %s\n", destino);
  return 0;
}