#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "Ingrese un numero" << endl;
	cin >> num;
	if (num>=1&&num<=100)
	{
		if (num/100>0)
		{
			cout << "El numero tiene 3 digitos" << endl;
		}
		else if (num/10>0)
		{
			cout << "El numero tiene 2 digitos" << endl;
		}
		else if (num/1>0)
		{
			cout << "El numero tiene 1 digito" << endl;
		}
	}
	else
	{
		cout << "Numero incorrecto" << endl;
	}





	system("pause");
}