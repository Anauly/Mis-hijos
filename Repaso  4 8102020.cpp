#include<stdio.h> //Input Output
#include<math.h>
#define PI 3.1416 // Definiendo una constante

int main(){
	float area, radio; // Declarando variables de tipo flotante
	radio = 5.12; // Asignando valor a variable radio
	area = PI * pow(5,2); // Asignando resultado de la operaci�n a variable �rea
	printf("Area\n"); // Imprimiendo un titulo
	// Imprimiendo un resultado
	printf("%s%f\n\n", ""Area de Circulo con radio 5:", area);
}