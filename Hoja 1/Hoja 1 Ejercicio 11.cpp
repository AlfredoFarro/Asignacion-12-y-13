#include<iostream>
using namespace std;
int main() {
	int GB;
	double costo;
	cout << "Ingrese la cantidad de GB consumidos: " << endl;
	cin >> GB;

	if (GB > 0) {
		if (GB > 0 && GB <= 4)
		{
			costo = 50;
			cout << "El costo es de: " << costo << " por mes" << endl;
		}
		else if (GB > 4 && GB <= 8)
		{
			costo = 85;
			cout << "El costo es de: " << costo << " por mes" << endl;
		}
		else if (GB > 8)
		{
			costo = 85 + ((GB - 8)*4.50);
			cout << "El costo es de: " << costo << " por mes" << endl;
		}

	}

	else
		cout << "El consumo de GB debe ser mayor a 0" << endl;



	system("pause");
}