#include <iostream>
using namespace std;

int main () {
  // declaracion de el arreglo
  int numeroArreglos[5];

  // modificamos los valores de los arreglos
  numeroArreglos[0] = 13;
  numeroArreglos[1] = 21;
  numeroArreglos[4] = 64;

  // imprimimos los valores de los arreglos
  for (size_t i = 0; i <= size(numeroArreglos); i++) {
    cout << numeroArreglos[i] << endl;
  }

  return 0;
}