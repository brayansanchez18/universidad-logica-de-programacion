#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // generar un valor aleatorio entre 0 y 100
  int minimo = 100, maximo = 200;

  // usamos la formula srand
  srand(time(0));

  int valorAleatorio = rand()%100;
  printf("vaalor al azar entre 0 y 100: %d\n", valorAleatorio);

  // valores aleatorios entre 100 y 200
  // valorAleatorio = rand()%(200-100) + 100;
  valorAleatorio = rand()%(maximo-minimo) + minimo;
  printf("valor al azar entre 100 y 200: %d\n", valorAleatorio);

  return 0;
}