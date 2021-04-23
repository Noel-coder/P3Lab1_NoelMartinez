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
				double numero;
				double result_mult;
				int t;
				cout << "Ingrese el numero para conseguir el resultado de la raiz cuadrada: "<<endl;
				cin >> numero;
				while(numero < 0) {
					cout << "Numeros negativos no son validos!"<<endl;
					cout << "Ingrese el dato n: "<<endl;
					cin >> numero;
				}
				cout << "Ingrese el dato t (iteraciones): "<<endl;
				cin >> t;
				while (t < 11) {
					cout << "Ingrese un numero valido! debe ser mayor que 10! "<<endl;
					cout << "Ingrese el dato t (iteraciones): "<<endl;
					cin >> t;
				}
				double minimo = 0;
				double mitad = 0;
				double maximo = numero;
				for(int i=0; i < t; i++){
					//Conseguimos la mitad
					mitad = (maximo+minimo)/2;
					//verificamos si el resultado es mayor que el maximo
					result_mult = mitad*mitad;
					if(result_mult>numero){
						//aqui verificamos que si el resultado de la multiplicacion de la mitad es mayor al maximo
						//declaramos el maximo con la mitad
						maximo=mitad;
					}else if(result_mult < numero){
						//aqui verificamos que si el resultado de la multiplicacion de la mitad es menor al maximo
						//declaramos el minimo con la mitad
						minimo = mitad;
					}
				}
				cout << "El resultado de la raiz cuadrada es: "<<mitad<<endl;
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

