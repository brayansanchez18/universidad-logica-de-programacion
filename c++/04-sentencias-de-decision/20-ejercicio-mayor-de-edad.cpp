#include <iostream>

using namespace std;

int main() {
  const int MAYOR_DE_EDAD = 18;
  int edad;

  cout << "proporciona tu edad: \n" << endl;
  cin >> edad;

  (edad >= MAYOR_DE_EDAD) ? cout << "eres mayor de edad\n" : cout << "eres menor de edad\n";

  return 0;
}