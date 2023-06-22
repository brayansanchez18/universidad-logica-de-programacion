#include <iostream>

using namespace std;

int main () {
  // declaramos el arreglo
  cout << "proporciona el largo del arreglo" << endl;
  int largoArreglo;
  cin >> largoArreglo;

  int *numeroArreglo = new int[largoArreglo];

  for (int i = 0; i < largoArreglo; i++) {
    cout << "porporciona el valor " << (i + 1) << ": ";
    cin >> numeroArreglo[i];
  }

  cout << "valor largoArreglo = " << endl;
  for (int i=0; i < largoArreglo; i++) {
    cout << "Valor[" << i << "] = " << numeroArreglo[i] << endl;
  }

  return 0;
}