#include<iostream>
#include<string>
using namespace std;
int main() {
	string CUC;
	string AAAA, MM, DD, LIM, P;
	bool lima, grande;
	cout << "Ingrese codigo unico de contribuyente: " << endl;
	cin >> CUC;
	AAAA = CUC.substr(0, 4);
	MM = CUC.substr(4, 2);
	DD = CUC.substr(6, 2);
	LIM = (CUC.substr(8, 3));
	P = (CUC.substr(11, 1));

	lima = (LIM == "LIM");
	grande = (P == "G");
	
	cout << "Dia de alta: " << DD << endl;
	cout << "Mes de alta: " << MM << endl;
	cout << "Anio de alta: " << AAAA << endl;
	cout << "Empresa de Lima (0:No; 1:Si): " << lima << endl;
	cout << "Empresa grande (0:No; 1:Si): " << grande << endl;
	cout << "Anio operando: 0" << endl;
	system("pause");
}