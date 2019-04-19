#include<iostream>
using namespace std;
int main() {
	int codigo;
	double nota1, nota2, nota3, prome;
	char carita;

	cout << "Ingrese el codigo del alumno: " << endl;
	cin >> codigo;

	if (codigo>0)
	{
		cout << "Ingrese las tres notas del alumno " << codigo << ": " << endl;
		cin >> nota1 >> nota2 >> nota3;
		if (nota1>=0&&nota1<=20&&nota2>=0&&nota2<=20&&nota3>=0&&nota3<=20)
		{
			prome = (0.3*nota1) + (0.3*nota2) + (0.4*nota3);
			carita = 1;
			if (prome<13)
			{
				cout << "El promedio del alumno " << codigo << " es de: " << prome << endl;
				cout << "Estudie";
			}
			else if (prome>=13&&prome<15)
			{
				cout << "El promedio del alumno " << codigo << " es de: " << prome << endl;
				cout << "Felicitaciones " << carita << endl;
			}
			else if (prome>=15&&prome<20)
			{
				cout << "El promedio del alumno " << codigo << " es de: " << prome << endl;
				cout << "Felicitaciones " << carita << " " << carita << endl;
			}
			else if (prome==20)
			{
				cout << "El promedio del alumno " << codigo << " es de: " << prome << endl;
				cout << "Felicitaciones " << carita << " " << carita << " " << carita << " " << carita << " " << carita << endl;
			}
		}
		else
		{
			cout << "Las notas ingresadas son las incorrectas" << endl;
		}
	}
	else
	{
		cout << "El codigo ingresado es incorrecto" << endl;
	}




	system("pause");
}