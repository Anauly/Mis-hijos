/* "Construye un programa que al recibir como dato el radio de un c�rculo, 
calcule e imprima tanto su �rea como la longitud de su circunferencia."
La f�rmula para el �rea de un circulo es:
A = pi * radio^2
La formula de la longitud de un circulo es:
longitud = 2 * pi *radio */

#include <iostream>
#include <math.h>
using namespace std;
int main(void){
	
	double radio, area, longitud;
	
	cout << "Ingrese el radio del circulo: "<<endl;
	cin>> radio;
	
	area = M_PI * pow(radio,2);
	longitud = 2 * M_PI * radio;
	
	cout.precision(4);
	cout << "El area del circulo es: "  << area << endl;
	cout << "La longitud de la circunferencia es: "<< longitud << endl;
	
}
