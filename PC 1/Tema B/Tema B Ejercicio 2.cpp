#include<iostream>
using namespace std;
int main() {
	int ventas;
	double Pago;
	char tienda;
	cout << "Ingrese las ventas del colaborador: " << endl;
	cin >> ventas;
	cout << "Ingrese el codigo de la tienda: " << endl;
	cin >> tienda;
	tienda = toupper(tienda);
	Pago = (ventas == 0 && tienda == 'M') * 900 * 1.02 + (ventas == 0 && tienda == 'S') * 900 * 1.05 + (ventas == 0 && tienda == 'L') * 900 * 1.10 + (ventas == 0 && tienda == 'A') * 900 * 1.15 + (ventas > 0 && ventas <= 5 && tienda == 'M') * 900 * 1.02*1.10 + (ventas > 0 && ventas <= 5 && tienda == 'S') * 900 * 1.05*1.10 + (ventas > 0 && ventas <= 5 && tienda == 'L') * 900 * 1.10*1.10 + (ventas > 0 && ventas <= 5 && tienda == 'A') * 900 * 1.15*1.10 + (ventas > 5 && ventas <= 10 && tienda == 'M') * 900 * 1.02*1.15 + (ventas > 5 && ventas <= 10 && tienda == 'S') * 900 * 1.05*1.15 + (ventas > 5 && ventas <= 10 && tienda == 'L') * 900 * 1.10*1.15 + (ventas > 5 && ventas <= 10 && tienda == 'A') * 900 * 1.15*1.15 + (ventas > 10 && tienda == 'M') * 900 * 1.02*1.25 + (ventas > 10 && tienda == 'S') * 900 * 1.05*1.25 + (ventas > 10 && tienda == 'L') * 900 * 1.10*1.25 + (ventas > 10 && tienda == 'A') * 900 * 1.15*1.25;
	cout << "El sueldo correspondiente es: " << Pago << endl;

	system("pause");
}