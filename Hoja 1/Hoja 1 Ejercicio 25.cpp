#include<iostream>
using namespace std;
int main() {
	double dia, precioFi;
	int ingre;
	cout << "Ingrese el diametro en centimetros: " << endl;
	cin >> dia;
	cout << "Ingrese el numero de ingredientes extras: " << endl;
	cin >> ingre;
	if (dia>0)
	{
		if (dia>0&&ingre>=0)
		{
			if (dia>0&&ingre==0)
			{
				precioFi = dia * 1.5;
				cout << "El precio total de la pizza es de S/" << precioFi << endl;
			}
			else if (dia>0&&ingre>0)
			{
				precioFi = dia * 1.5 + ingre * 2.5;
				cout << "El precio total de la pizza es de S/" << precioFi << endl;
			}
		}
		else
		{
			cout << "El numero de ingredientes ingresado es el incorrecto" << endl;
		}
	}
	else
	{
		cout << "El diametro en centimetros debe ser mayor a 0" << endl;
	}

	system("pause");
}