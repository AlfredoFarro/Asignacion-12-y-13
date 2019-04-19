#include <iostream>
using namespace std;
int main() {
	int gl, gv;

	cout << "Ingrese la cantidad de goles del equipo local: " << endl;
	cin >> gl;
	cout << "Ingrese la cantidad de goles del equipo visitante: " << endl;
	cin >> gv;

	if (gl >= 0 && gv >= 0)
	{
		if (gl > gv)
			cout << "Gano equipo local" << endl;
		else {
			if (gl < gv)
				cout << "Gano equipo visitante" << endl;
			else
			{
				if (gl == gv)
					cout << "Empate" << endl;
			}
		}
	}
	else
	{
		cout << "Los goles ingresados son invalidos" << endl;
	}


	system("pause");

}