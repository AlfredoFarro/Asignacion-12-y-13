#include<iostream>
using namespace std;
int main() {
	char aero, dia;
	int male;
	double precio, incremento;
	cout << "Ingrese la Aerolinea (L:LATAM, V:Viva): " << endl;
	cin >> aero;
	aero = toupper(aero);
	cout << "Dia (L:Lunes, M:Martes, N:Miercoles, J:Jueves, V:Viernes, S:Sabado, D:Domingo): " << endl;
	cin >> dia;
	dia = toupper(dia);
	cout << "Maletas: " << endl;
	cin >> male;

	precio = (aero == 'L'&&dia == 'L' || aero == 'L'&&dia == 'M' || aero == 'L'&&dia == 'N' || aero == 'L'&&dia == 'J')*70.4 + (aero == 'L'&&dia == 'V' || aero == 'L'&&dia == 'S')*100.8 + (aero == 'L'&&dia == 'D')*90.1 + (aero == 'V'&&dia == 'L' || aero == 'V'&&dia == 'M' || aero == 'V'&&dia == 'N' || aero == 'V'&&dia == 'J')*20.4 + (aero == 'V'&&dia == 'V' || aero == 'V'&&dia == 'S')*70.6 + (aero == 'V'&&dia == 'D')*80.3;
	incremento = (male == 0)*precio + (male == 1 || male == 2)*precio*1.15 + (male > 2)*precio*1.30;
	cout << "Precio del ticket: " << incremento << endl;
	system("pause");
}