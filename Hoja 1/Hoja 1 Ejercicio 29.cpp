#include<iostream>
using namespace std;
int main() {
	char modelo;
	int digito;
	double mante;
	cout << "Ingrese el modelo: " << endl;
	cin >> modelo;
	modelo = toupper(modelo);
	cout << "Ingrese el ultimo digito de la placa: " << endl;
	cin >> digito;
	cout << "Ingrese el costo de mantenimiento anual: " << endl;
	cin >> mante;

	switch (modelo)
	{
	case 'A':
	{
		switch (digito)
		{
		case 0:case 1:case 2:case 3:case 4:case 5:
		{
			if (mante > 0)
			{
				if (mante > 0 && mante <= 500)
				{
					cout << "El mes de revision tecnica es: ENERO" << endl;
				}
				else if (mante>500)
				{
					cout << "El mes de revision tecnica es: FEBRERO" << endl;
				}
			}
			else
			{
				cout << "El costo de mantenimiento es incorrecto" << endl;
			}
			break;
		}
		case 6:case 7:case 8:
		{
			if (mante > 0)
			{
				if (mante > 0 && mante <= 700)
				{
					cout << "El mes de revision tecnica es: JUNIO" << endl;
				}
				else if (mante > 700)
				{
					cout << "El mes de revision tecnica es: JULIO" << endl;
				}
			}
			else
			{
				cout << "El costo de mantenimiento es incorrecto" << endl;
			}
			break;
		}
		case 9:
		{
			if (mante > 0)
			{
				if (mante > 0 && mante <= 1000)
				{
					cout << "El mes de revision tecnica es: OCTUBRE" << endl;
				}
				else if (mante > 1000)
				{
					cout << "El mes de revision tecnica es: NOVIEMBRE" << endl;
				}
			}
			else
			{
				cout << "El costo de mantenimiento es incorrecto" << endl;
			}
			break;
		}
		default:
		{
			cout << "El ultimo digito de la placa es incorrecto" << endl;
		}
		}
		break;
	}
	case 'B':
	{
		switch (digito)
		{
		case 1:case 2:case 3:
		{
			if (mante > 0)
			{
				if (mante > 0 && mante <= 500)
				{
					cout << "El mes de revision tecnica es: MARZO" << endl;
				}
				else if (mante > 500)
				{
					cout << "El mes de revision tecnica es: ABRIL" << endl;
				}
			}
			else
			{
				cout << "El costo de mantenimiento es incorrecto" << endl;
			}
			break;
		}
		case 4: case 5: case 6: case 7: case 8:
		{
			if (mante > 0)
			{
				if (mante > 0 && mante <= 700)
				{
					cout << "El mes de revision tecnica es: MAYO" << endl;
				}
				else if (mante > 700)
				{
					cout << "El mes de revision tecnica es: SETIEMBRE" << endl;
				}
			}
			else
			{
				cout << "El costo de mantenimiento es incorrecto" << endl;
			}
			break;
		}
		case 0:case 9:
		{
			if (mante > 0)
			{
				if (mante > 0 && mante <= 1000)
				{
					cout << "El mes de revision tecnica es: AGOSTO" << endl;
				}
				else if (mante > 1000)
				{
					cout << "El mes de revision tecnica es: DICIEMBRE" << endl;
				}
			}
			else
			{
				cout << "El costo de mantenimiento es incorrecto" << endl;
			}
			break;
		}
		default:
		{
			cout << "El ultimo digito de la placa es incorrecto" << endl;
		}
		}
		break;
	}
	default:
	{
		cout << "El modelo ingresado es incorrecto" << endl;
	}
	}

	system("pause");
}