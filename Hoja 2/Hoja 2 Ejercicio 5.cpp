#include <iostream>
using namespace std;
int main() {
	int mes, año;
	cout << "Ingrese el mes de nacimiento: " << endl;
	cin >> mes;
	cout << "Ingrese el anio de nacimiento: " << endl;
	cin >> año;
	if (año>0)
	{
		if (año % 4 == 0 && (año % 100 != 0 || año % 400 == 0))
		{
			switch (mes)
			{
			case 1:
			{
				cout << "Enero tiene 31 dias" << endl;
				break;
			}
			case 2:
			{
				cout << "Febrero tiene 29 dias" << endl;
				break;
			}
			case 3:
			{
				cout << "Marzo tiene 31 dias" << endl;
				break;
			}
			case 4:
			{
				cout << "Abril tiene 30 dias" << endl;
				break;
			}
			case 5:
			{
				cout << "Mayo tiene 31 dias" << endl;
				break;
			}
			case 6:
			{
				cout << "Junio tiene 30 dias" << endl;
				break;
			}
			case 7:
			{
				cout << "Julio tiene 31 dias" << endl;
				break;
			}
			case 8:
			{
				cout << "Agosto tiene 31 dias" << endl;
				break;
			}
			case 9:
			{
				cout << "Setiembre tiene 30 dias" << endl;
				break;
			}
			case 10 :
			{
				cout << "Octubre tiene 31 dias" << endl;
				break;
			}
			case 11 :
			{
				cout << "Noviembre tiene 30 dias" << endl;
				break;
			}
			case 12 :
			{
				cout << "Diciembre tiene 31 dias" << endl;
				break;
			}
			default:
				cout << "El mes ingresado es incorrecto" << endl;
			}
		}
		else
		{
			switch (mes)
			{
			case 1:
			{
				cout << "Enero tiene 31 dias" << endl;
				break;
			}
			case 2:
			{
				cout << "Febrero tiene 28 dias" << endl;
				break;
			}
			case 3:
			{
				cout << "Marzo tiene 31 dias" << endl;
				break;
			}
			case 4:
			{
				cout << "Abril tiene 30 dias" << endl;
				break;
			}
			case 5:
			{
				cout << "Mayo tiene 31 dias" << endl;
				break;
			}
			case 6:
			{
				cout << "Junio tiene 30 dias" << endl;
				break;
			}
			case 7:
			{
				cout << "Julio tiene 31 dias" << endl;
				break;
			}
			case 8:
			{
				cout << "Agosto tiene 31 dias" << endl;
				break;
			}
			case 9:
			{
				cout << "Setiembre tiene 30 dias" << endl;
				break;
			}
			case 10:
			{
				cout << "Octubre tiene 31 dias" << endl;
				break;
			}
			case 11:
			{
				cout << "Noviembre tiene 30 dias" << endl;
				break;
			}
			case 12:
			{
				cout << "Diciembre tiene 31 dias" << endl;
				break;
			}
			default:
				cout << "El mes ingresado es incorrecto" << endl;
			}
		}
	}
	else
	{
		cout << "El anio ingresado es incorrecto" << endl;
	}






	system("pause");
}