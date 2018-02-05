/*
 * main.cpp
 *
 *  Created on: 3 feb. 2018
 *      Author: Pedro Juan Ibarra
 */

#include <iostream>

using namespace std;

#ifdef _WIN32
#include <windows.h>
void clrscreen(){
	system("CLS");
}
void pausa(){
	system ("pause");
}
#else
#include <unistd.h>
void clrscreen(){
	//system("CLS");
}
void pausa(){
	// system ("pause");
}
#endif

void menu() {
	cout << "**********************"<< endl;
	cout << "\t1) Opcion 1" << endl;
	cout << "\t2) Opcion 2" << endl;
	cout << "\t3) Opcion 3" << endl;
	cout << "\t4) Opcion 4" << endl;
	cout << "**********************"<< endl << endl;
	cout << "Eliga una o pulse S para salir" << endl;
}

void footer() {

	cout << "Pulse cualquier tecla para continuar." << endl;
	// system("pause"); //Funciona en windows no en unix/linux
	pausa();

}

void header(int opt) {

	//system ("CLS"); //Funciona en windows no en unix/linux
	clrscreen();

	switch (opt){
	case 1:
		cout << "************"<<endl;
		cout << "* Opcion 1 *"<< endl;
		cout << "************"<<endl;
		break;
	case 2:
		cout << "************"<<endl;
		cout << "* Opcion 2 *"<< endl;
		cout << "************"<<endl;
		break;
	case 3:
		cout << "************"<<endl;
		cout << "* Opcion 3 *"<< endl;
		cout << "************"<<endl;
		break;
	case 4:
		cout << "************"<<endl;
		cout << "* Opcion 4 *"<< endl;
		cout << "************"<<endl;
		break;
	}

}


void opcion1(){

}
void opcion2(){

}
void opcion3(){

}

void opcion4(){

}
int main(){
	char ch;

	do {
		 // system("CLS"); //Funciona en windows no en unix/linux
		clrscreen();
		menu();
		cin >> ch;
		switch (ch){
		case '1':
			header(1);
			opcion1();
			footer();
			break;
		case '2':
			header(2);
			opcion2();
			footer();
			break;
		case '3':
			header(3);
			opcion3();
			footer();
			break;
		case '4':
			header(4);
			opcion4();
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


