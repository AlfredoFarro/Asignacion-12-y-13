#include<iostream>
using namespace std;
int main() {
	double nota;
	cout << "Ingrese la nota del alumno: " << endl;
	cin >> nota;
	if (nota<0||nota>20)
	{
		cout << "La nota ingresada es incorrecta" << endl;
	}
	else if (nota>=0&&nota<5)
	{
		cout << "Necesita estudiar" << endl;
	}
	else if (nota>=5&&nota<13)
	{
		cout << "Jalado" << endl;
	}
	else if (nota>=13&&nota<15)
	{
		cout << "Raspando" << endl;
	}
	else if (nota>=15&&nota<20)
	{
		cout << "Sobresaliente" << endl;
	}
	else if (nota==20)
	{
		cout << "Matricula de honor" << endl;
	}


	system("pause");
}