#include<iostream>
using namespace std;
int main() {
	int zona, consumo, fija1, fija2;
	double pago;
	cout << "Ingrese zona (1-2): " << endl;
	cin >> zona;
	cout << "Ingrese consumo: " << endl;
	cin >> consumo;

	fija1 = 50;
	fija2 = 25;

	if (zona==1||zona==2)
	{
		if (consumo >= 0)
		{
			if (zona == 1)
			{
				if (consumo == 0)
				{
					pago = fija1;
					cout << "El monto a pagar es: " << pago << endl;
				}
				else if (consumo>0&&consumo<=100)
				{
					pago = fija1 + (0.75*consumo);
					cout << "El monto a pagar es: " << pago << endl;
				}
				else if (consumo>100)
				{
					pago = fija1 + (0.75 * 100) + (consumo - 100)*0.9;
					cout << "El monto a pagar es: " << pago << endl;
				}
			}
			else if (zona == 2)
			{
				if (consumo == 0)
				{
					pago = fija2;
					cout << "El monto a pagar es: " << pago << endl;
				}
				else if (consumo > 0 && consumo <= 100)
				{
					pago = fija2 + (0.3*consumo);
					cout << "El monto a pagar es: " << pago << endl;
				}
				else if (consumo > 100)
				{
					pago = fija2 + (0.3 * 100) + (consumo - 100)*0.7;
					cout << "El monto a pagar es: " << pago << endl;
				}
			}
		}
		else
		{
			cout << "El consumo debe ser 0 o mayor de 0" << endl;
		}
	}
	else
	{
		cout << "La zona ingresada es incorrecta" << endl;
	}

	system("pause");
}