#include<iostream>
using namespace std;
int main() {
	int edad;
	double precio;
	cout << "Ingrese la edad del espectador: " << endl;
	cin >> edad;
	if (edad>0)
	{
		if (edad>=5)
		{
			if (edad>=5&&edad<=14)
			{
				precio = 15 * 0.65;
				cout << "El tipo de la entrada es Entrada 1 y el costo es de $" << precio << endl;
			}
			else if (edad>=15&&edad<=19)
			{
				precio = 15 * 0.75;
				cout << "El tipo de la entrada es Entrada 2 y el costo es de $" << precio << endl;
			}
			else if (edad>=20&&edad<=45)
			{
				precio = 15 * 0.9;
				cout << "El tipo de la entrada es Entrada 3 y el costo es de $" << precio << endl;
			}
			else if (edad>=46&&edad<=65)
			{
				precio = 15 * 0.78;
				cout << "El tipo de la entrada es Entrada 4 y el costo es de $" << precio << endl;
			}
			else if (edad>=66)
			{
				precio = 15 * 0.5;
				cout << "El tipo de la entrada es Entrada 5 y el costo es de $" << precio << endl;
			}
		}
		else
		{
			cout << "La edad minima para entrar al teatro es de 5 anios" << endl;
		}
	}
	else
	{
		cout << "La edad ingresada es incorrecta" << endl;
	}

	system("pause");
}