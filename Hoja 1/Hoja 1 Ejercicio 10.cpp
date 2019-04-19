#include<iostream>
using namespace std;
int main() {
	double Ambrosoli, AmbC, TicTac, TicCos, Donofrio, DonoCos, MontoTotal, MontoPropina;

	cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 1: " << endl;
	cin >> Ambrosoli;
	cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 2: " << endl;
	cin >> TicTac;
	cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 3: " << endl;
	cin >> Donofrio;
	cout << "Ingrese el Monto de la Propina: " << endl;
	cin >> MontoPropina;

	AmbC = Ambrosoli * 0.75;
	TicCos = TicTac * 1.15;
	DonoCos = Donofrio * 0.65;
	MontoTotal = AmbC + TicCos + DonoCos;
	cout << "El monto total de la compra es: " << MontoTotal << endl;
	if (MontoPropina > MontoTotal)
		cout << "LA PROPINA FUE SUFICIENTE PARA PAGAR POR LOS CARAMELOS" << endl;
	else
		cout << "LA PROPINA NO FUE SUFICIENTE PARA PAGAR POR LOS CARAMELOS" << endl;

	system("pause");
}