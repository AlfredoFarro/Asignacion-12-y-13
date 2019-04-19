#include<iostream>
using namespace std;
int main() {
	double consumo, pago;
	char tipo;
	cout << "Escriba su consumo: " << endl;
	cin >> consumo;
	cout << "Escriba el tipo de consumo(C=tipo1; D=tipo2): " << endl;
	cin >> tipo;
	tipo = toupper(tipo);

	switch (tipo)
	{
	case 'C':
	{
		if (consumo > 0)
		{
			pago = consumo * 1.58;
			cout << "El pago a realizar es: " << pago << endl;
		}
		else
		{
			cout << "El consumo ingresado es incorrecto" << endl;
		}
		break;
	}
	case 'D':
	{
		if (consumo > 0)
		{
			if (consumo > 0 && consumo <= 100)
			{
				pago = consumo * 0.35;
				cout << "El pago a realizar es: " << pago << endl;
			}
			else if (consumo > 100 && consumo <= 500)
			{
				pago = (100 * 0.35) + (consumo - 100)*1.05;
				cout << "El pago a realizar es: " << pago << endl;
			}
			else if (consumo > 500)
			{
				pago = (100 * 0.35) + (400 * 1.05) + (consumo - 500)*1.36;
				cout << "El pago a realizar es: " << pago << endl;
			}
		}
		else
		{
			cout << "El consumo ingresado es incorrecto" << endl;
		}
		break;
	}
	default:
	{
		cout << "El tipo de consumo colocado es incorrecto" << endl;
	}
	}
	system("pause");
}