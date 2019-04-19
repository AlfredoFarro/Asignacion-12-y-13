#include<iostream>
using namespace std;
int main() {
	int cursos, ciclo;
	double pago;
	cout << "Ingrese el numero de cursos: " << endl;
	cin >> cursos;
	cout << "Ingrese el numero del ciclo a cursar: " << endl;
	cin >> ciclo;
	if (cursos>0)
	{
		if (ciclo>0&&ciclo<=10)
		{
			if (ciclo>0&&ciclo<=3)
			{
				pago = cursos * 155 * 0.9;
				cout << "El costo es de $" << pago << endl;
			}
			else if (ciclo>3&&ciclo<=6)
			{
				pago = cursos * 155 * 0.85;
				cout << "El costo es de $" << pago << endl;
			}
			else if (ciclo>6&&ciclo<=8)
			{
				pago = cursos * 155 * 0.83;
				cout << "El costo es de $" << pago << endl;
			}
			else if (ciclo>8&&ciclo<=10)
			{
				pago = cursos * 155 * 0.82;
				cout << "El costo es de $" << pago << endl;
			}
		}
		else
		{
			cout << "El numero de ciclo es incorrecto" << endl;
		}
	}
	else
	{
		cout << "El numero de cursos es incorrecto" << endl;
	}


	system("pause");
}