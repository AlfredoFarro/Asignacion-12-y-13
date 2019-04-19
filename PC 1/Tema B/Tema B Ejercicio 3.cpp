#include<iostream>
using namespace std;
int main() {
	char vista, dia;
	int camas;
	double precio, incremento;
	cout << "Ingrese la vista (M:Mar, I:Interior): " << endl;
	cin >> vista;
	vista = toupper(vista);
	cout << "Dia (L:Lunes, M:Martes, N:Miercoles, J:Jueves, V:Viernes, S:Sabado, D:Domingo): " << endl;
	cin >> dia;
	dia = toupper(dia);
	cout << "Camas: " << endl;
	cin >> camas;

	precio = (vista == 'M'&&dia == 'L' || vista == 'M'&&dia == 'M' || vista == 'M'&&dia == 'N' || vista == 'M'&&dia == 'J')*20.4 + (vista == 'M'&&dia == 'V' || vista == 'M'&&dia == 'S')*80.8 + (vista == 'M'&&dia == 'D')*70.1 + (vista == 'I'&&dia == 'L' || vista == 'I'&&dia == 'M' || vista == 'I'&&dia == 'N' || vista == 'I'&&dia == 'J')*15.7 + (vista == 'I'&&dia == 'V' || vista == 'I'&&dia == 'S')*60.7 + (vista == 'I'&&dia == 'D')*65.8;
	incremento = (camas == 1)*precio + (camas == 2 || camas == 3)*precio*1.12 + (camas > 3)*precio*1.25;
	cout << "Precio del ticket: " << incremento << endl;
	system("pause");
}