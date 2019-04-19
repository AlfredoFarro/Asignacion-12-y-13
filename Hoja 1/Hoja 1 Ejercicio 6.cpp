#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double A, B, C, X, discriminante, raiz1, raiz2, resultado;

	cout << "Ingrese el valor de A: " << endl;
	cin >> A;
	cout << "Ingrese el valor de B: " << endl;
	cin >> B;
	cout << "Ingrese el valor de C: " << endl;
	cin >> C;
	cout << "Ingrese un valor para evaluar: " << endl;
	cin >> X;

	discriminante = (B*B) - (4 * A*C);
	if (discriminante > 0) {
		raiz1 = (-B + sqrt(discriminante)) / (2 * A);
		raiz2 = (-B - sqrt(discriminante)) / (2 * A);
		resultado = A * X*X + B * X + C;
		cout << "Raiz 1: " << raiz1 << endl;
		cout << "Raiz 2: " << raiz2 << endl;
		cout << A << "(" << X << ")" << "^2 + " << B << "(" << X << ") + " << C << " = " << resultado << endl;
	}
	
	else
		cout << "El discriminante debe ser mayor a 0" << endl;
	

	system("pause");
}