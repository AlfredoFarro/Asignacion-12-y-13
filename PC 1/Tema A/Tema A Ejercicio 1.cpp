#include <iostream>
using namespace std;
double precioTerreno(double precio,double cambio,double tamaño)
{
	double total;
	total = precio * cambio*tamaño;
	return total;
}
int main()
{
	double precioT, cambioD, tamañoT, totalP;
	cout << "Ingrese el tamaño del terreno en metros cuadrados: " << endl;
	cin >> tamañoT;
	cout << "Ingrese el precio por metro cuadrado en dolares: " << endl;
	cin >> precioT;
	cout << "Ingrese el tipo de cambio del dia: " << endl;
	cin >> cambioD;
	totalP = precioTerreno(precioT, cambioD, tamañoT);
	cout << "El precio total de venta en soles del terreno es: " << totalP << endl;
	system("pause");
}