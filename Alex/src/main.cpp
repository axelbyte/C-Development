/*
 * main.cpp
 *
 *  Created on: 3 feb. 2018
 *      Author: Pedro Juan Ibarra
 */

#include <iostream>
#include "CPoint.h"

using namespace std;

void menu() {
	cout << "\t1) Opcion 1" << endl;
	cout << "\t2) Opcion 2" << endl;
	cout << "\t3) Opcion 3" << endl;
	cout << "\t4) Opcion 4" << endl;
	cout << "Eliga una o pulse S para salir" << endl;
}

void footer() {
	cout << "Pulse cualquier tecla para continuar." << endl;
	system("pause");
}

int CPoint::n = 0;

void opcion1(){
	CPoint a(3,4);
	CPoint b[5];
	CPoint *c = new CPoint;

	cout << a.n << endl; // imprime 7
	delete c;
	cout << CPoint::n<<endl<<endl;
}

int main(){
	char ch;

	do {
		system("CLS");
		menu();
		cin >> ch;
		switch (ch){
		case '1':
			cout<<"Opcion 1"<<endl;
			opcion1();
			footer();
			break;
		case '2':
			cout<<"Opcion 2"<<endl;
			footer();
			break;
		case '3':
			cout<<"Opcion 3"<<endl;
			footer();
			break;
		case '4':
			cout<<"Opcion 4"<<endl;
			footer();
			break;
		case 's':
		case 'S':
			break;
		default:
			cout<<"Eliga una opcion valida"<<endl;
			footer();
		}

	}while ((ch!='S') && (ch!='s'));

	return 0;
}


