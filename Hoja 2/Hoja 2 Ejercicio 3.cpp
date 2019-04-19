#include <iostream>
using namespace std;
int main() {
	int dia, mes;
	cout << "Escriba su dia de nacimiento: " << endl;
	cin >> dia;
	cout << "Escriba su mes de nacimiento: " << endl;
	cin >> mes;
	if (dia>0&&dia<=31)
	{
		if (mes>0&&mes<=12)
		{
			if (((dia>=22&&dia<=31)&&(mes==12))|| ((dia > 0 && dia <= 20) && (mes == 1)))
			{
				cout << "Su signo zodiacal es Capricornio" << endl;
			}
			else if (((dia>=21&&dia<=31)&&(mes==1))||((dia>0&&dia<=19)&&(mes==2)))
			{
				cout << "Su signo zodiacal es Acuario" << endl;
			}
			else if (((dia >= 20 && dia <= 28) && (mes == 2)) || ((dia > 0 && dia <= 20) && (mes == 3)))
			{
				cout << "Su signo zodiacal es Piscis" << endl;
			}
			else if (((dia >= 21 && dia <= 31) && (mes == 3)) || ((dia > 0 && dia <= 20) && (mes == 4)))
			{
				cout << "Su signo zodiacal es Aries" << endl;
			}
			else if (((dia >= 21 && dia <= 30) && (mes == 4)) || ((dia > 0 && dia <= 21) && (mes == 5)))
			{
				cout << "Su signo zodiacal es Tauro" << endl;
			}
			else if (((dia >= 22 && dia <= 31) && (mes == 5)) || ((dia > 0 && dia <= 21) && (mes == 6)))
			{
				cout << "Su signo zodiacal es Geminis" << endl;
			}
			else if (((dia >= 22 && dia <= 30) && (mes == 6)) || ((dia > 0 && dia <= 23) && (mes == 7)))
			{
				cout << "Su signo zodiacal es Cancer" << endl;
			}
			else if (((dia >= 24 && dia <= 31) && (mes == 7)) || ((dia > 0 && dia <= 23) && (mes == 8)))
			{
				cout << "Su signo zodiacal es Leo" << endl;
			}
			else if (((dia >= 24 && dia <= 31) && (mes == 8)) || ((dia > 0 && dia <= 23) && (mes == 9)))
			{
				cout << "Su signo zodiacal es Virgo" << endl;
			}
			else if (((dia >= 24 && dia <= 30) && (mes == 9)) || ((dia > 0 && dia <= 23) && (mes == 10)))
			{
				cout << "Su signo zodiacal es Libra" << endl;
			}
			else if (((dia >= 24 && dia <= 31) && (mes == 10)) || ((dia > 0 && dia <= 22) && (mes == 11)))
			{
				cout << "Su signo zodiacal es Escorpio" << endl;
			}
			else if (((dia >= 23 && dia <= 30) && (mes == 11)) || ((dia > 0 && dia <= 21) && (mes == 12)))
			{
				cout << "Su signo zodiacal es Sagitario" << endl;
			}
		}
		else
		{
			cout << "El mes ingresado es incorrecto" << endl;
		}
	}
	else
	{
		cout << "El dia ingresado es incorrecto" << endl;
	}

	system("pause");
}