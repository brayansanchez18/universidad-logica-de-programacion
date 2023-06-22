#include <iostream>

using namespace std;

int main() {
	// Operadores de Asignacion
	// Operador = para asignar un valor
	int miNumero = 10;
	cout << "Valor miNumero: " << miNumero << endl;
	miNumero = 20;
	cout << "Valor miNumero: " << miNumero << endl;
	// Operador +=
	miNumero += 5;//miNumero = miNumero + 5  
	cout << "Valor miNumero: " << miNumero << endl;
	// Operador -=
	miNumero -= 3; // n = n + 3;
	cout << "Valor miNumero: " << miNumero << endl;
	// Operador *=
	miNumero *= 2; // n = n * 2
	cout << "Valor miNumero: " << miNumero << endl;
	//Operador /= // n = n / 7
	miNumero /= 7;
	cout << "Valor miNumero: " << miNumero << endl;
	// Operador %= (modulo o residuo division)
	miNumero %= 2;
	cout << "Valor residuo: " << miNumero << endl;
	
	return 0;
}

