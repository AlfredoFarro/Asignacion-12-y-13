#include<iostream>
using namespace std;
int main() {
	double pesoE, pesoD;

	cout << "Ingrese el peso del dinosaurio: " << endl;
	cin >> pesoD;
	cout << "Ingrese el peso del elefante: " << endl;
	cin >> pesoE;

	if (pesoD > pesoE)
		cout << "El dinosaurio pesa mas que el elefante" << endl;
	else
		cout << "El elefante pesa mas que el dinoaurio" << endl;

	system("pause");
}