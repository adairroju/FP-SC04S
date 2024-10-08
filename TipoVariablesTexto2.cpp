// Actividad 07/10/24
//

using namespace std;

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>

int main()
{

//1. declarar e imprimir texto
	string texto0 = "Hola Mundo";
	cout << texto0 << endl;
	cout << endl;

//2. Unir dos textos en uno
	string textoA = "Hola ";
	string textoB = "Mundo";
	string saludo = textoA + textoB;
	cout << saludo << endl;
	cout << endl;

//3. Introducir un valor en una variable de texto (string) usando el teclado
	string nombre;
	cout << "Introdue tu primer nombre: " << endl;
	cin >> nombre;
	cout << "¡Hola " << nombre << "!" << endl;
	cout << endl;

//4. Introducir una línea completa de texto (string)
//Una función es un pedazo de código que siempre se define entre paréntesis
	cin.ignore();
	string nombreCompleto;
	cout << "Introduce tu nombre completo: "<<endl;
	getline(cin, nombreCompleto);
	cout << endl;
	cout << "Tu nombre es: " << nombreCompleto << endl;
	cout << endl;

//5. Longitud de un texto
	cout << "La longitud de tu nombre es: " <<nombreCompleto.length() << " caracteres"<<endl;
	cout << endl;

//6. Acceder a un caracter específico en un texto (syting)
	cout << "La primer letra de tu nombre es: " << nombreCompleto[0] << endl;
	cout << endl;
	//Los "[]" son operadores de índice posición que funcionan con números enters (int)
	//El "." es un operador de acceso que permite accesar funciones, variables, constantes,
	//clases, objetos y estructuras.

//7. Cambiar un caracter en una posición específica
	string texto = "Texto";
	string cambio = texto;
	cambio[0] = 't';
	cout <<"Cambio de un caracter: " <<texto << " --> " << cambio << endl;
	cout << endl;

//8. Convertir un string a mayúsculas
	string texto8 =nombreCompleto;
	string texto8_1 = nombreCompleto;
	transform(texto8.begin(), texto8.end(), texto8.begin(), ::tolower);
	transform(texto8_1.begin(), texto8_1.end(), texto8_1.begin(), ::toupper);
	cout <<"Tu nombre en minúsculas: "<< texto8 << endl;
	cout << "Tu nombre en mayúsculas: "<< texto8_1 << endl;
	cout << endl;

//10. Como insterar un texto dentro de otro
	string texto10 = "Pi es igual a .1416";
	texto10.insert(14, "3");
	cout <<"Pi es igual a .1416 -->"<< texto10 << endl;
	cout << endl;

//11. Convertir un número entero a texto (string)
	int numero11 = 123;
	string texto11 = to_string(numero11);
	cout << "Int: 123 --> A string: " << texto11 << endl;

//12. Convertir un string a número 
	string texto12 = "123";
	int numero12 = stoi(texto12);
	cout << "String: 123 --> A número (int): " << numero12 << endl;
	cout << endl;

}
