#include<iostream>
using namespace std;
int main() {
	int num, num1, num2, num3;
	cout << "Ingrese el numero: " << endl;
	cin >> num;

	if (num>=100&&num<=999)
	{
		num1 = num / 100;
		num = num % 100;
		num2 = num / 10;
		num = num % 10;
		num3 = num;
		if (num1 == num3)
		{
			cout<<"Es numero capicua" << endl;
		}
		else
		{
			cout << "No es numero capicua" << endl;
		}
	}
	else
	{
		cout << "Numero incorrecto" << endl;
	}





	system("pause");
}