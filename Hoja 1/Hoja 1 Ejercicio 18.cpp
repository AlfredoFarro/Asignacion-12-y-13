#include<iostream>
using namespace std;
int main() {
	int posi;

	cout << "Ingrese la posicion del equipo en la tabla: " << endl;
	cin >> posi;

	if (posi<=0)
	{
		cout << "La posicion ingresada es la incorrecta" << endl;
	}
	else if (posi > 0 && posi <= 4)
	{
		cout << "El equipo seleccionado ira al mundial !!!" << endl;
	}
	else if (posi==5)
	{
		cout << "El equipo seleccionado ira a repechaje" << endl;
	}
	else if (posi>5)
	{
		cout << "Comprate una TV LED para ver el mundial !!!" << endl;
	}

	system("pause");
}