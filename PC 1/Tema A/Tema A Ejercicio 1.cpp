#include <iostream>
using namespace std;
double precioTerreno(double precio,double cambio,double tama�o)
{
	double total;
	total = precio * cambio*tama�o;
	return total;
}
int main()
{
	double precioT, cambioD, tama�oT, totalP;
	cout << "Ingrese el tama�o del terreno en metros cuadrados: " << endl;
	cin >> tama�oT;
	cout << "Ingrese el precio por metro cuadrado en dolares: " << endl;
	cin >> precioT;
	cout << "Ingrese el tipo de cambio del dia: " << endl;
	cin >> cambioD;
	totalP = precioTerreno(precioT, cambioD, tama�oT);
	cout << "El precio total de venta en soles del terreno es: " << totalP << endl;
	system("pause");
}