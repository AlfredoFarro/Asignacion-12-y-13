#include <iostream>
using namespace std;
int main() {
	char cate;
	double horas, pago;
	cout << "Ingrese la categoria a la cual pertenece: " << endl;
	cin >> cate;
	cate = toupper(cate);
	cout << "Ingrese el numero de horas trabajadas: " << endl;
	cin >> horas;
	switch (cate)
	{
	case 'A':
	{
		if (horas>0)
		{
			pago = horas * 30;
			cout << "El monto a pagar es: " << pago << endl;
		}
		else
		{
			cout << "El numero de horas debe ser mayor a 0" << endl;
		}
		break;
	}
	case'B':
	{
		if (horas > 0)
		{
			pago = horas * 35;
			cout << "El monto a pagar es: " << pago << endl;
		}
		else
		{
			cout << "El numero de horas debe ser mayor a 0" << endl;
		}
		break;
	}
	case'C':
	{
		if (horas > 0)
		{
			pago = horas * 40;
			cout << "El monto a pagar es: " << pago << endl;
		}
		else
		{
			cout << "El numero de horas debe ser mayor a 0" << endl;
		}
		break;
	}
	case'D':
	{
		if (horas > 0)
		{
			pago = horas * 45;
			cout << "El monto a pagar es: " << pago << endl;
		}
		else
		{
			cout << "El numero de horas debe ser mayor a 0" << endl;
		}
		break;
	}
	case'E':
	{
		if (horas > 0)
		{
			pago = horas * 50;
			cout << "El monto a pagar es: " << pago << endl;
		}
		else
		{
			cout << "El numero de horas debe ser mayor a 0" << endl;
		}
		break;
	}
	default:
	{
		cout << "La categoria ingresada es incorrecta" << endl;
	}
	}

	system("pause");
}