/*Operaciones aritméticas con números naturales
Melina Cuellar, Ignacio Muñoz, Ramiro Balsa, Agustín Sebastián, Yamil Lopez
20170503
*/

#include<iostream>

using std :: cout;
using std :: cin;
using std :: endl; 

int main(){
	unsigned a, b, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	cout<<"Digite un numero: ";
	cin>>a;
	cout<<"Digite otro numero: ";
	cin>>b;
	
	suma = a+b;
	resta = a-b;
	multiplicacion = a*b;
	division = a/b;
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
	cout<<"La division es: "<<division<<endl;
	
	return 0;
}
