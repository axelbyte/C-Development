/*
 * main.cpp
 *
 *  Created on: 3 feb. 2018
 *      Author: Pedro Juan Ibarra
 */

#include <iostream>
using namespace std;

int main(){
	char ch;
	system ("CLS");

	do {
		cout << "\t1) Opcion 1"<<endl;
		cout << "\t2) Opcion 2"<<endl;
		cout << "\t3) Opcion 3"<<endl;
		cout << "\t4) Opcion 4"<<endl;
		cout << "Eliga una o pulse S para salir"<<endl;
		cin >> ch;
		switch (ch){
		case '1':
			cout<<"Opcion 1"<<endl;
			cout<< "Pulse cualquier tecla para continuar."<<endl;
			system("pause");
			break;
		case '2':
			cout<<"Opcion 2"<<endl;
			cout<< "Pulse cualquier tecla para continuar."<<endl;
			system("pause");
			break;
		case '3':
			cout<<"Opcion 3"<<endl;
			cout<< "Pulse cualquier tecla para continuar."<<endl;
			system("pause");
			break;
		case '4':
			cout<<"Opcion 4"<<endl;
			cout<< "Pulse cualquier tecla para continuar."<<endl;
			system("pause");
			break;
		default:
			cout<<"Eliga una opcion valida"<<endl;
			cout<< "Pulse cualquier tecla para continuar."<<endl;
			system("pause");
			system("CLS");
		}

	}while ((ch!='S') && (ch!='s'));

	return 0;
}


