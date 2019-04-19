#include<iostream>
using namespace std;
int main() {
	int numero, num1, num2, num3;
	cout << "Ingrese el numero: " << endl;
	cin >> numero;
	if (numero >= 100 && numero <= 999)
	{
		cout << "Numero correcto" << endl;
		num1 = numero / 100;
		numero = numero % 100;
		num2 = numero / 10;
		numero = numero % 10;
		num3 = numero;
		cout << "El numero al reves es: " << num3 << num2 << num1 << endl;
	}

	else
		cout << "Numero incorrecto" << endl;


	system("pause");
}