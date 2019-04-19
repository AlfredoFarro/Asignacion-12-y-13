#include<iostream>
using namespace std;
int main() {
	char escala;
	int cursos, fija, variable, importe;
	
	cout << "Ingresa la escala de pago: " << endl;
	cin >> escala;
	escala = toupper(escala);
	cout << "Ingresa el numero de cursos: " << endl;
	cin >> cursos;

	switch (escala)
	{
	case 'A':
	{
		if (cursos > 0)
		{
			if (cursos > 0 && cursos <= 5)
			{
				variable = 400;
				fija = 350;
				importe = fija + variable;
				cout << "El importe a cancelar es de S/" << importe << endl;
			}
			else if (cursos > 5 && cursos <= 8)
			{
				variable = 600;
				fija = 350;
				importe = fija + variable;
				cout << "El importe a cancelar es de S/" << importe << endl;
			}
			else if (cursos > 8)
			{
				variable = 900;
				fija = 350;
				importe = fija + variable;
				cout << "El importe a cancelar es de S/" << importe << endl;
			}
		}
		else
		{
			cout << "El numero de cursos es incorrecto" << endl;
		}
		break;
	}
	case 'B':
	{
		if (cursos > 0)
		{
			if (cursos > 0 && cursos <= 3)
			{
				variable = 350;
				fija = 350;
				importe = fija + variable;
				cout << "El importe a cancelar es de S/" << importe << endl;
			}
			else if (cursos > 3 && cursos <= 7)
			{
				variable = 500;
				fija = 350;
				importe = fija + variable;
				cout << "El importe a cancelar es de S/" << importe << endl;
			}
			else if (cursos > 7)
			{
				variable = 700;
				fija = 350;
				importe = fija + variable;
				cout << "El importe a cancelar es de S/" << importe << endl;
			}
		}
		else
		{
			cout << "El numero de cursos es incorrecto" << endl;
		}
		break;
	}
	case 'C':
	{
		if (cursos > 0)
		{
			if (cursos > 0 && cursos <= 3)
			{
				variable = 320;
				fija = 350;
				importe = fija + variable;
				cout << "El importe a cancelar es de S/" << importe << endl;
			}
			else if (cursos > 3 && cursos <= 7)
			{
				variable = 480;
				fija = 350;
				importe = fija + variable;
				cout << "El importe a cancelar es de S/" << importe << endl;
			}
			else if (cursos > 7)
			{
				variable = 685;
				fija = 350;
				importe = fija + variable;
				cout << "El importe a cancelar es de S/" << importe << endl;
			}
		}
		else
		{
			cout << "El numero de cursos es incorrecto" << endl;
		}
		break;
	}
	case'D':
	{
		if (cursos > 0)
		{
			if (cursos > 0 && cursos <= 4)
			{
				variable = 310;
				fija = 350;
				importe = fija + variable;
				cout << "El importe a cancelar es de S/" << importe << endl;
			}
			else if (cursos > 4 && cursos <= 8)
			{
				variable = 475;
				fija = 350;
				importe = fija + variable;
				cout << "El importe a cancelar es de S/" << importe << endl;
			}
			else if (cursos > 8)
			{
				variable = 680;
				fija = 350;
				importe = fija + variable;
				cout << "El importe a cancelar es de S/" << importe << endl;
			}
		}
		else
		{
			cout << "El numero de cursos es incorrecto" << endl;
		}
		break;
	}
	default:
	{
		cout << "La escala ingresada es la incorrecta" << endl;
	}
	}



	system("pause");
}