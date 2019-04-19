#include<iostream>
using namespace std;
int main() {
	int dia, mes, año;
	cout << "Ingresa tu dia de nacimiento: " << endl;
	cin >> dia;
	cout << "Ingresa tu mes de nacimiento: " << endl;
	cin >> mes;
	cout << "Ingresa tu anio de nacimiento: " << endl;
	cin >> año;
	if (año > 0)
	{
		if (año % 2 == 0)
		{
			if (dia % 2 == 0)
			{
				switch (mes)
				{
				case 1:case 2: case 3:
				{
					cout << "Tu color es: Rojo" << endl;
					break;
				}
				case 4:case 5:case 6:
				{
					cout << "Tu color es: Naranja" << endl;
					break;
				}
				case 7:case 8:case 9:
				{
					cout << "Tu color es: Marron" << endl;
					break;
				}
				case 10:case 11:case 12:
				{
					cout << "Tu color es: Violeta" << endl;
					break;
				}
				default:
				{
					cout << "El mes ingresado es incorrecto" << endl;
				}
				}
			}
			else
			{
				switch (mes)
				{
				case 1:case 2: case 3:
				{
					cout << "Tu color es: Celeste" << endl;
					break;
				}
				case 4:case 5:case 6:
				{
					cout << "Tu color es: Verde" << endl;
					break;
				}
				case 7:case 8:case 9:
				{
					cout << "Tu color es: Fucsia" << endl;
					break;
				}
				case 10:case 11:case 12:
				{
					cout << "Tu color es: Rosado" << endl;
					break;
				}
				default:
				{
					cout << "El mes ingresado es incorrecto" << endl;
				}
				}
			}
		}
		else
		{
			if (dia % 2 == 0)
			{
				switch (mes)
				{
				case 1:case 2: case 3:
				{
					cout << "Tu color es: Morado" << endl;
					break;
				}
				case 4:case 5:case 6:
				{
					cout << "Tu color es: Turquesa" << endl;
					break;
				}
				case 7:case 8:case 9:
				{
					cout << "Tu color es: Azul" << endl;
					break;
				}
				case 10:case 11:case 12:
				{
					cout << "Tu color es: Olivo" << endl;
					break;
				}
				default:
				{
					cout << "El mes ingresado es incorrecto" << endl;
				}
				}
			}
			else
			{
				switch (mes)
				{
				case 1:case 2: case 3:
				{
					cout << "Tu color es: Negro" << endl;
					break;
				}
				case 4:case 5:case 6:
				{
					cout << "Tu color es: Gris" << endl;
					break;
				}
				case 7:case 8:case 9:
				{
					cout << "Tu color es: Amarillo" << endl;
					break;
				}
				case 10:case 11:case 12:
				{
					cout << "Tu color es: Blanco" << endl;
					break;
				}
				default:
				{
					cout << "El mes ingresado es incorrecto" << endl;
				}
				}
			}
		}
	}
	else
	{
		cout << "El anio ingresado es incorrecto" << endl;
	}
	system("pause");
}