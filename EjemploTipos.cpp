/* Operaciones aritméticas con distintos tipos de datos
 * Melina Cuellar
 * Ignacio Muñoz
 * Ramiro Balsa
 * Agustín Sebastián
 * Yamil Lopez
 * Germán Varona
 * 20170503
 */


#include<iostream>
#include<string.h>

using namespace std;

/*operaciones con naturales, enteros, reales y booleanos*/
int main(){
	
	unsigned a, b, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	double ri,rj,suma_reales =0, resta_reales =0, multiplicacion_reales=0, division_reales=0;
	bool valor;
	bool prueba;
	bool add, conjuncion;
	char char_a;
	char char_b;
  	char cad1 [30] ;
    	char cad2 [30] ;
	int largo =strlen(cad1);
	int int_a, int_b, int_suma = 0, int_resta = 0, int_multiplicacion = 0, int_division = 0;
	valor = false ;
	prueba = true ;
	
	cout << "*******EJEMPLOS CON NATURALES******* \n \n";
	cout<<"Digite un numero natural: ";
	cin>>a;
	cout<<"Digite otro numero natural: ";
	cin>>b;

	suma = a+b;
	resta = a-b;
	multiplicacion = a*b;
	division = a/b;

	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
	cout<<"La division es: "<<division<<endl;

	if(a==b){
		cout<<"Ambos numeros son iguales" <<endl;
	}
	else if(a>b){
		cout<<"El mayor es: "<<a <<endl;
	}
	else{
		cout<<"El mayor es: "<<b <<endl;
	}

	cout << "\n*******EJEMPLOS CON ENTEROS******* \n \n";
	cout<<"Digite un numero entero: ";
	cin>>int_a;
	cout<<"Digite otro numero entero: ";
	cin>>int_b;

	int_suma = int_a+int_b;
	int_resta = int_a-int_b;
	int_multiplicacion = int_a*int_b;
	int_division = int_a/int_b;

	cout<<"\nLa suma es: "<<int_suma<<endl;
	cout<<"La resta es: "<<int_resta<<endl;
	cout<<"La multiplicacion es: "<<int_multiplicacion<<endl;
	cout<<"La division es: "<<int_division<<endl;

	if(int_a==int_b){
		cout<<"Ambos numeros son iguales" <<endl;
	}
	else if(int_a>int_b){
		cout<<"El mayor es: "<< int_a <<endl;
	}
	else{
		cout<<"El mayor es: "<< int_b <<endl;
	}
	
  	cout << "\n*******EJEMPLOS CON REALES******* \n \n";

 	cout << "Ingrese un numero real: " ;

 	cin >> ri;

 	cout << "\nIngrese otro numero real: " ;

 	cin >> rj;

 	suma_reales=ri+rj;
 	resta_reales=ri-rj;
 	multiplicacion_reales=ri*rj;
 	division_reales=ri/rj;

 	cout << "\nEl resultado de la suma es: " << suma_reales << endl;
 	cout << "\nEl resultado de la resta es: " << resta_reales << endl;
 	cout << "\nEl resultado de la division es: " << division_reales << endl;
 	cout << "\nEl resultado de la multiplicacion es: " << multiplicacion_reales << endl;


	 while (ri != rj){
		if (ri>rj) {
		cout <<"\nEl numero " << ri << " es mayor a " << rj <<endl;
		}
		else {
		cout <<"\nEl numero " << rj << " es mayor a " << ri <<endl;
					}
		valor = true;
		cout <<"\nAl ser numeros distintos el valor de la variable booleana es: "  << valor << "\n \n";
	break;
}
while (valor == false){
	cout << "\nLos numeros son iguales \n";
	cout << "\nAl ser numeros iguales el valor de la variable booleana es: " << valor << "\n \n";
	break;
}


	 cout << "*******EJEMPO BOOL******* \n"<<endl;
	 add = prueba and valor;
	 conjuncion = prueba or valor;
	 cout << "Ejemplo de operacion and: " << add <<  "\n" ; //Para que de 1, los numeros reales deben ser distintos 
	 cout << "\nEjemplo de operacion or: "  << conjuncion  <<  "\n"; //Siempra va a dar 1
	 cout << "\nEjemplo de operacion not primer variable: " << not valor  <<  "\n"; //Da 1 si los numeros reales son iguales 
	 cout << "\nEjemplo de operacion not segunda varible: " << not prueba  <<  "\n" ; // Siempra va a dar 0 



/*strings*/
{
    cout << "\n******* EJEMPLO CON STRING*******" << endl;
    cout << "\nEjemplo 1: Determinar si dos cadenas son iguales (o no) " << endl;
  
    cout << "\nIngrese la primer cadena: ";
    cin>> cad1;

    cout << "\nIngrese la segunda cadena: ";
    cin>>cad2;


    if (strcmp(cad1,cad2)==0)
    {
        cout<<"\nLas dos cadenas son iguales"<<endl;
    }
    else
    {
        cout<<"\nLas dos cadenas no son iguales"<<endl;
    }
    
    cout << "\n \nEjemplo 2: Determinar cual cadena es mayor (alfabeticamente) " << endl;

    cout << "\nIngrese la primer cadena: ";
    cin>> cad1;

    cout << "\nIngrese la segunda cadena: ";
    cin>> cad2;


    if (strcmp(cad1,cad2)==0)
    {
        cout<<"\n \nLas dos cadenas son iguales"<<endl;
    }
    else
    {
        if (strcmp(cad1,cad2)<0)
        {
            cout<<"\n \nLa cadena: " <<"\t"<<cad2<<"\t"<<"es mayor " <<endl;
        }
        else
        {

            cout<<"\n \nLa cadena: " <<"\t"<<cad1<<"\t"<<"es mayor" <<endl;
        }
    }

    cout << "\nEjemplo 3: Unir dos cadenas consecutivamente  " << endl;

    cout << "\nIngrese la primer cadena: ";
    cin>> cad1;

    cout << "\nIngrese la segunda cadena: ";
    cin>> cad2; 

    strcat(cad1,cad2);

    cout<<"\n \nLa cadena resultante es:  "<<"\t"<<cad1<<endl;
    

    cout << "\nEjemplo 4: Determinar el largo de una cadena " << endl;

    cout << "\nIngrese la cadena a calcular: ";
    cin>> cad1;
    
    cout <<"\n \nEl largo de la cadena es de"<<"("<<largo<<")"<<"caracteres"<<endl;

	
	cout << "\n*******EJEMPLO CON CHAR******* \n"<<endl; 
	cout << "INGRESE CHAR A: ";
	cin >> char_a;
	
	cout << "\nINGRESE CHAR B: ";
	cin >> char_b;

	if (char_a > char_b)
	{
		cout << "\nLA RESTA A-B ES: " << char_a - char_b << "\n";
	}
	else if (char_a < char_b)
	{
		cout << "\nLA SUMA A+B ES: " << char_a + char_b << "\n";
	}
	else
	{
		cout << "LA DIVISION A/B ES: " << char_a / char_b << "\n";
	}
		cout << "LA MULTIPLICACION A*B ES: " << char_a * char_b << "\n";
	

} 
}
