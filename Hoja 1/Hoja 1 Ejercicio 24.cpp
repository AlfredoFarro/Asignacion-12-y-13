#include<iostream>
using namespace std;
int main() {
	int numCom;
	double precio1, descuento, precioFi;
	cout << "Ingrese el numero de computadoras a comprar: " << endl;
	cin >> numCom;
	if (numCom>0)
	{
		if (numCom>0&&numCom<5)
		{
			precio1 = numCom * 760;
			descuento = precio1 * 0.1;
			precioFi = precio1 - descuento;
			cout << "El costo es de $" << precio1 << " y el total aplicando el descuento de $" << descuento << " es de $" << precioFi << endl;
		}
		else if (numCom>=5&&numCom<10)
		{
			precio1 = numCom * 760;
			descuento = precio1 * 0.2;
			precioFi = precio1 - descuento;
			cout << "El costo es de $" << precio1 << " y el total aplicando el descuento de $" << descuento << " es de $" << precioFi << endl;
		}
		else if (numCom>=10)
		{
			precio1 = numCom * 760;
			descuento = precio1 * 0.4;
			precioFi = precio1 - descuento;
			cout << "El costo es de $" << precio1 << " y el total aplicando el descuento de $" << descuento << " es de $" << precioFi << endl;
		}
	}
	else
	{
		cout << "El numero de computadoras debe ser mayor a 0" << endl;
	}

	system("pause");
}