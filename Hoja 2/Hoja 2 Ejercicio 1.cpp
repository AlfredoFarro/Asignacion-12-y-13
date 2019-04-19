#include <iostream>
using namespace std;
int main() {
	int opcion;
	double baseT, alturaT, AreaT, lado1Rec, lado2Rec, areaRec, radioCir, AreaCir, ladoCua, AreaCua;
	cout << "1.-Area de un Triangulo\n2.-Area de un Rectangulo\n3.-Area de un Circulo\n4.-Area de un Cuadrado\n5.-Salir\nQue opcion desea?" << endl;
	cin >> opcion;
	switch (opcion)
	{
	case 1:
	{
		cout << "Ingrese la base: " << endl;
		cin >> baseT;
		cout << "Ingrese la altura: " << endl;
		cin >> alturaT;
		if (baseT > 0 && alturaT > 0)
		{
			AreaT = (baseT*alturaT) / 2;
			cout << "El area del triangulo es: " << AreaT << endl;
		}
		else
		{
			cout << "Los datos ingresados son incorrectos" << endl;
		}
		break;
	}
	case 2:
	{
		cout << "Ingrese el lado 'a': " << endl;
		cin >> lado1Rec;
		cout << "Ingrese el lado 'b': " << endl;
		cin >> lado2Rec;
		if (lado1Rec>0&&lado2Rec>0)
		{
			areaRec = lado1Rec * lado2Rec;
			cout << "El area del rectangulo es: " << areaRec << endl;
		}
		else
		{
			cout << "Los datos ingresados son incorrectos" << endl;
		}
		break;
	}
	case 3:
	{
		cout << "Ingrese el radio: " << endl;
		cin >> radioCir;
		if (radioCir>0)
		{
			AreaCir = 3.14*radioCir*radioCir;
			cout << "El area del circulo es: " << AreaCir << endl;
		}
		else
		{
			cout << "Los datos ingresados son incorrectos" << endl;
		}
		break;
	}
	case 4:
	{
		cout << "Ingrese el lado: " << endl;
		cin >> ladoCua;
		if (ladoCua>0)
		{
			AreaCua = ladoCua * ladoCua;
			cout << "El area del cuadrado es: " << AreaCua << endl;
		}
		else
		{
			cout << "Los datos ingresados son incorrectos" << endl;
		}
		break;
	}
	case 5:
	{
		break;
	}
	default:
	{
		cout << "La opcion escogida es incorrecta" << endl;
	}
	}

	system("pause");
}