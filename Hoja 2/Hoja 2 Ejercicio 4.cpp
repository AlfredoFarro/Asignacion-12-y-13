#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double Val, V;
	int num;
	cout << "Ingrese el valor de Num: " << endl;
	cin >> num;
	cout << "Ingrese el valor de V: " << endl;
	cin >> V;

	switch (num)
	{
	case 1:
	{
		if (V >= 0)
		{
			Val = 100 * V;
			cout << "El valor de Val es: " << Val << endl;
		}
		else
		{
			cout << "El valor de V es incorrecto" << endl;
		}
		break;
	}
	case 2:
	{
		if (V >= 0)
		{
			Val = pow(100, V);
			cout << "El valor de Val es: " << Val << endl;
		}
		else
		{
			cout << "El valor de V es incorrecto" << endl;
		}
		break;
	}
	case 3:
	{
		if (V >= 0)
		{
			Val = 100 / V;
			cout << "El valor de Val es: " << Val << endl;
		}
		else
		{
			cout << "El valor de V es incorrecto" << endl;
		}
		break;
	}
	default:
	{
		Val = 0;
		cout << "El valor de Val es: " << Val << endl;
	}
	}

	system("pause");
}