#include<iostream>
using namespace std;
int main() {
	int edad;
	cout << "Ingrese la edad de la persona: " << endl;
	cin >> edad;

	if (edad >= 1 && edad < 18)
		cout << "El precio de la entrada es de 7 soles" << endl;
	if (edad >= 18 && edad <= 50)
		cout << "El precio de la entrada es de 15 soles" << endl;
	if (edad > 50)
		cout << "El precio de la entrada es de 5 soles" << endl;
	if (edad <= 0)
		cout << "La edad ingresada es la incorrecta" << endl;
	system("pause");
}