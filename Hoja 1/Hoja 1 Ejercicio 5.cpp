#include<iostream>
using namespace std;
int main() {
	int lado1, lado2, lado3;
	cout << "Ingrese los lados de un triangulo (A B C): " << endl;
	cin >> lado1 >> lado2 >> lado3;
	
	if (lado1 > lado2&&lado1 > lado3&&lado2<lado1&&lado2>lado3&&lado3 < lado1&&lado3 < lado2)
	{
		if (lado1<(lado2 + lado3) && lado1>(lado2 - lado3) && lado2<(lado1 + lado3) && lado2>(lado1 - lado3) && lado3<(lado1 + lado2) && lado3>(lado1 - lado2))
			cout << "SI ES UN TRIANGULO" << endl;
		else
			cout << "NO ES UN TRIANGULO" << endl;
	}
	if (lado1 > lado2&&lado1 > lado3&&lado2 < lado1&&lado2 < lado3&&lado3 < lado1&&lado3 > lado2)
	{
		if (lado1<(lado2 + lado3) && lado1>(lado3 - lado2) && lado2<(lado1 + lado3) && lado2>(lado1 - lado3) && lado3<(lado1 + lado2) && lado3>(lado1 - lado2))
			cout << "SI ES UN TRIANGULO" << endl;
		else
			cout << "NO ES UN TRIANGULO" << endl;
	}
	if (lado2 > lado1&&lado2 > lado3&&lado1<lado2&&lado1>lado3&&lado3 < lado1&&lado3 < lado2)
	{
		if (lado1<(lado2 + lado3) && lado1>(lado2 - lado3) && lado2<(lado1 + lado3) && lado2>(lado1 - lado3) && lado3<(lado1 + lado2) && lado3>(lado2 - lado1))
			cout << "SI ES UN TRIANGULO" << endl;
		else
			cout << "NO ES UN TRIANGULO" << endl;
	}
	if (lado2 > lado1&&lado2 > lado3&&lado1 < lado2&&lado1<lado3&&lado3 > lado1&&lado3 < lado2)
	{
		if (lado1<(lado2 + lado3) && lado1>(lado2 - lado3) && lado2<(lado1 + lado3) && lado2>(lado3 - lado1) && lado3<(lado1 + lado2) && lado3>(lado2 - lado1))
			cout << "SI ES UN TRIANGULO" << endl;
		else
			cout << "NO ES UN TRIANGULO" << endl;
	}
	if (lado3 > lado1&&lado3 > lado2&&lado2<lado3&&lado2>lado1&&lado1 < lado3&&lado1 < lado2)
	{
		if (lado1<(lado2 + lado3) && lado1>(lado3 - lado2) && lado2<(lado1 + lado3) && lado2>(lado3 - lado1) && lado3<(lado1 + lado2) && lado3>(lado2 - lado1))
			cout << "SI ES UN TRIANGULO" << endl;
		else
			cout << "NO ES UN TRIANGULO" << endl;
	}
	if (lado3 > lado1&&lado3 > lado2&&lado2<lado3&&lado2<lado1&&lado1 < lado3&&lado1 > lado2)
	{
		if (lado1<(lado2 + lado3) && lado1>(lado3 - lado2) && lado2<(lado1 + lado3) && lado2>(lado3 - lado1) && lado3<(lado1 + lado2) && lado3>(lado1 - lado2))
			cout << "SI ES UN TRIANGULO" << endl;
		else
			cout << "NO ES UN TRIANGULO" << endl;
	}

	
	system("pause");
}