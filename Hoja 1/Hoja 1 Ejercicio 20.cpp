#include<iostream>
using namespace std;
int main() {
	int creditos;
	cout << "Ingrese la cantidad de creditos acumulados: " << endl;
	cin >> creditos;
	if (creditos<=0)
	{
		cout << "La cantidad de creditos ingresada es incorrrecta" << endl;
	}
	else if (creditos>0&&creditos<32)
	{
		cout << "El alumno se encuentra en el PRIMER ANIO" << endl;
	}
	else if (creditos>=32&&creditos<=63)
	{
		cout << "El alumno se encuentra en el SEGUNDO ANIO" << endl;
	}
	else if (creditos>=64&&creditos<=95)
	{
		cout << "El alumno se encuentra en el TERCER ANIO" << endl;
	}
	else if (creditos>=96)
	{
		cout << "El alumno se encuentra en el CUARTO ANIO" << endl;
	}

	system("pause");
}