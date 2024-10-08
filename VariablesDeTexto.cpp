// Trabajo 03/10/24 

#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
#include <string>
using namespace std;

int main() 

{

//Manejo de puntos decimales y separador de miles
	locale loc("");
	cout.imbue(loc);

//Declarar e imprimir una variable string
	string texto0 = "Hola mundo";
	cout << texto0 << endl;
	cout << endl;

//Unión de dos variables tipo String

	string tipoA = "Hello ";
	string tipoB = "World";
	string saludo = tipoA + tipoB;
	cout << saludo << endl;
	cout << endl;

//Introducir e imprimir un valor en una variable tipo string

	string nombre;
	cout << "¿Cuál es tu primer nombre?";
	cin >> nombre;
	cout << endl;
	cout << "Hola " << nombre << endl;
	cout << endl;

//Imrpimir una línea completa de texto

	cin.ignore(); //Permite agregar más de una palabra
	string nombreCompleto;
	cout << "Introduce tu nombre completo:";
	getline(cin, nombreCompleto);
	//Cuando se necesita más de una palabra, se utiliza getline

	cout << "Tu nombre es:" << nombreCompleto << endl;
	cout << endl;
	
//Acceso a un caracter específico
	
	cout <<"La primer letra de tu nombre es:"<< nombre[0]<<endl;
	cout << endl;

}
