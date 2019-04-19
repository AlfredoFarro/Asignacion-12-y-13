#include<iostream>
using namespace std;
int main() {
	int faltas;
	double promedio;

	cout << "Ingrese el promedio: " << endl;
	cin >> promedio;
	cout << "Ingrese el numero de faltas: " << endl;
	cin >> faltas;

	if (promedio >= 15 && faltas == 0)
	{
		cout << "Cumple los requisitos para la beca" << endl;
	}
	else
		cout << "No cumple los requisitos para la beca" << endl;







	system("pause");
}