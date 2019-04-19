#include<iostream>
using namespace std;
int main() {
	double nota;
	cout << "Ingrese la nota del alumno: " << endl;
	cin >> nota;
	
	if (nota >= 0 && nota < 12.5)
		cout << "Desaprobado" << endl;
	else {
		if (nota >= 12.5&&nota <= 20)
			cout << "Aprobado" << endl;
	}
	if (nota < 0 || nota>20)
		cout << "La nota ingresada es invalida" << endl;
	system("pause");
}