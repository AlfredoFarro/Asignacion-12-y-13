#include<iostream>
using namespace std;
int main() {
	double monto, pago;
	cout << "Ingrese el monto del prestamo en $: " << endl;
	cin >> monto;
	if (monto<=0)
	{
		cout << "El monto debe ser mayor a $0" << endl;
	}
	else if (monto>0&&monto<=5000)
	{
		pago = monto * 1.03;
		cout << "El monto a pagar es de $ " << pago << endl;
	}
	else if (monto>5000&&monto<=10000)
	{
		pago = monto * 1.02;
		cout << "El monto a pagar es de $ " << pago << endl;
	}
	else if (monto>10000)
	{
		pago = monto * 1.01;
		cout << "El monto a pagar es de $ " << pago << endl;
	}



	system("pause");
}