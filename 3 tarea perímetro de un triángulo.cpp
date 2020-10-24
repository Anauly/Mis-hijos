/*Calculo del perimetro y area de un triángulo
a dos decimales*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a,b,c,Perimetro,S,Area=0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	
	Perimetro=a+b+c; // P = Perimetro
	S=Perimetro/2; // S = Semiperimetro
	Area=sqrt((S)*(S-a)*(S-b)*(S-c)); // A= Area del perimetro

	cout.precision(2);
	cout<<"\nEl Perimetro es: "<<Perimetro<<endl;
	cout<<"\nEl Area es: "<<Area<<endl;
	
	return 0;
}
