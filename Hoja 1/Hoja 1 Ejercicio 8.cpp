#include<iostream>
using namespace std;
int main() {
	int edad,pulsa;
	char sexo;
	
	cout << "Ingrese el sexo de la persona (F o M): " << endl;
	cin >> sexo;
	cout << "Ingrese la edad de la persona: " << endl;
	cin >> edad;

	if (sexo == 'F')
	{
		pulsa = ((220 - edad) / 10)+0.5;
		cout << "El numero debe ser de "<<pulsa << " pulsaciones por cada 10 segundos aproximadamente." << endl;
	}
	else {
		if (sexo == 'M')
		{
			pulsa = (210 - edad) / 10;
			cout << "El numero debe ser de "<< pulsa << " pulsaciones por cada 10 segundos aproximadamente." << endl;
		}
	}

	system("pause");
}