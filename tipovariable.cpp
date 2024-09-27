// Proyecto 29-09-24.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream> //Biblioteas
using namespace std; //evita tener que usar std con doble punto en cada línea

/*
Holi
Comentario 1
*/

//Comentario 2 //Comenario 2.5

int main()
{
	//1. Entero (int) -2,147,483,648 a 2,147,483,647
				//unsigned int 0 a 4,294,967,295

	int numeroEntero=42;
		cout << "Número:"<<numeroEntero << endl;
		cout << "Comentario 3" << endl;

	//2. Entero corto (short int) -32768 a 32,767
					//unsigned short 0 a 65,535

	unsigned short numeroChiquito = 1224;
		cout << "Número chiquito:" << numeroChiquito << endl;

	//3. Entero largo (long long) -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807
					//unsigned long long 0 a 18,446,744,073,709,551,615

		long long numeroLargo = 5536519464;
			cout << "Número de teléfono:"<<numeroLargo<<endl;
		cout << "Comentario 4" << endl;

	//4. Entero sin signo (unsigned int) 0 a 4,294,967,295

		unsigned int numeroEntero2 = 4294697294;
		cout << "Número entero grande:" << numeroEntero2 << endl;
		cout << "Comentario 5" << endl;

	//5. Entero corto sin signo (unsigned short) 0 a 65,535

		unsigned short numeroChiquito2 = 48562;
		cout << "Número chiquito no tan chiquito:" << numeroChiquito2 << endl;

	//6. Entero largo sin signo (unsigned long long) 0 a 18,446,744,073,709,551,615

		unsigned long long numeroLargo2 = 15365194648425423594;
		cout << "Número muy largo:" << numeroLargo2 << endl;
		cout << "Comentario 6" << endl;
}

