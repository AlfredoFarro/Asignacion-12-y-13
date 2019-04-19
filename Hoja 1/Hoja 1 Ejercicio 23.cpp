#include<iostream>
using namespace std;
int main() {
	double horas, pago;
	cout << "Ingrese el total de horas trabajadas por el obrero: " << endl;
	cin >> horas;
	if (horas>0)
	{
		if (horas>0&&horas<=40)
		{
			pago = horas * 16;
			cout << "El salario semanal del obrero es de $" << pago << endl;
		}
		else if (horas>40)
		{
			pago = (40 * 16) + (horas - 40) * 20;
			cout << "El salario semanal del obrero es de $" << pago << endl;
		}
	}
	else
	{
		cout << "Debe trabajar mas de 0 horas" << endl;
	}

	system("pause");
}