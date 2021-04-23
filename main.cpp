#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int opcion=1;
	while(opcion != 4) {
		cout << "Menu" << endl
		     << "1. Tablero Ajedrez" << endl
		     << "2. Sumatoria" << endl
		     << "3. Raiz Cuadrada" << endl
		     << "4. Salir"<< endl;
		cout << "Ingrese una opcion: " << endl;
		cin>>opcion;
		switch(opcion) {
			case 1: {
				//tablero de ajedrez
				int numero;
				cout << "Ingrese un numero que sera para sus filas y columnas: "<<endl;
				cin >> numero;
				while(numero < 0) {
					cout << "¡¡Porfavor ingrese un numero positivo!!" << endl;
					cout << "Ingrese un numero que sera para sus filas y columnas: "<<endl;
					cin >> numero;
				}
				for(int i = 0; i < numero; i++) {
					if(i%2==0) {
						for(int j=0; j < numero; j++) {
							if(j%2==0) {
								cout << "0";
							} else {
								cout << "1";
							}
						}
						cout << endl;
					} else {
						for(int j=0; j < numero; j++) {
							if(j%2==0) {
								cout << "1";
							} else {
								cout << "0";
							}
						}
						cout<<endl;
					}
				}
				break;
			}
			case 2: {
				//sumatoria
				int numero;
				cout << "Ingrese un numero para realizar la sumatoria: " << endl;
				cin >> numero;
				while(numero < 0) {
					cout << "¡¡Porfavor ingrese un numero positivo!!" << endl;
					cout << "Ingrese un numero para realizar la sumatoria: " << endl;
					cin >> numero;
				}
				int acumulador = 0;
				for(int i=1; i <= numero; i++) {
					acumulador+= (2*i)*(i-1);
				}
				cout << "El resultado de la sumatoria es: " << acumulador <<endl;
				break;
			}
			case 3: {
				//raiz cuadrada

				break;
			}
			case 4: {
				cout << "Gracias por utilizar el programa :)" << endl;
				break;
			}
			default: {
				cout << "Dato ingresado no es valido!" << endl;
				break;
			}
		}
	}
	return 0;
}

