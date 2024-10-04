// Trabajo en clase 30/09/2024

using namespace std;
//Evita tener que usar std en cada renglón

//"Include" agrega librerías al código
#include <iostream>

#include <limits>
//Ayuda a encontrar el mínimo y el máximo de un tipo de dato

#include <iomanip>
//Manipulación de etapas, precisión de dígitos

#include <locale>
//Toma las preferencias de Windows

int main()

{
//Manejo de punto decimal y separador de miles por comas
    locale loc("");
    cout.imbue(loc);

//1. Entero (int)
    int numeroEntero = 42;
    cout<<"Entero:"<<numeroEntero<<endl;
    cout << "Rango Int:" << numeric_limits<int>::min() << " a " << numeric_limits<int>::max()<<endl;
    cout<<endl;

//2. Entero Corto (short int)
    short int numeroCorto = 32000;
    cout << "Entero corto:" << numeroCorto << endl;
    cout << "Rango Short Int:" << numeric_limits<short int>::min() << " a " << numeric_limits<short int>::max() << endl;
    cout<<endl;

//3. Entero Largo (long int)
    long int numeroLargo = 1234567890L;
    cout << "Entero largo:" << numeroLargo << endl;
    cout << "Rango Long Int:" << numeric_limits<long>::min() << " a " << numeric_limits<long>::max() << endl;
    cout << endl;

//4. Entero sin signo (unsigned int)
    unsigned int enteroSinSigno = 4000000000U;
    cout << "Entero sin signo:" << enteroSinSigno << endl;
    cout << "Rango Unsigned Int:" << numeric_limits<unsigned int>::min() << " a " << numeric_limits<unsigned int>::max() << endl;
    cout << endl;

//5. Entero corto sin signo (unsigned short int)
    unsigned short int cortoSinSigno = 65000;
    cout << "Corto sin signo:" << cortoSinSigno << endl;
    cout << "Rango unsigned short int:" << numeric_limits<unsigned short int>::min() << " a " << numeric_limits<unsigned short int>::max() << endl;
    cout << endl;

//6. Entero largo sin signo (unsigned long long)
    unsigned long long largoSinSigno = 4000000000UL;
    cout << "Largo sin signo:" << largoSinSigno << endl;
    cout << "Rango Unsigned long long:" << numeric_limits<unsigned long long>::min() << " a " << numeric_limits<unsigned long long>::max() << endl;
    cout<<endl;

//7. Entero con signo explícito (signed int)
    signed int enteroConSigno = -32000;
    cout << "Entero con signo:" << enteroConSigno << endl;
    cout << "Rango Signed int:" << numeric_limits<signed int>::min() << " a " << numeric_limits<signed int>::max() << endl;
    cout << endl;

//8. Entero Corto con signo explícito (signed short int)
    signed short int cortoConSigno = -32000;
    cout << "Entero corto con signo:" << cortoConSigno << endl;
    cout << "Rango Signed Short Int:" << numeric_limits<signed short int>::min() << " a " << numeric_limits<signed short int>::max() << endl;
    cout << endl;

//9. Entero largo con signo explicito(signed long long)
    signed long long largoConSigno = -4000000000;
    cout << "Largo con signo:" << largoConSigno << endl;
    cout << "Rango Signed long long:" << numeric_limits<signed long long>::min() << " a " << numeric_limits<signed long long>::max() << endl;
    cout << endl;

//10. Entero largo largo (long long int)
    long long int enteroLargoLargo= 12345678912345;
    cout << "Largo largo:" << enteroLargoLargo << endl;
    cout << "Rango long long:" << numeric_limits<long long>::min() << " a " << numeric_limits<long long>::max() << endl;
    cout << endl;

//Introducir datos en la consola
    int edad;
    cout << "Ingresa tu edad:";
    cin >> edad;
    cout << endl;
    cout << "¿Tu edad es " << edad << "?"<<endl;
    cout << endl;

//Decimales
    //float = 7 dígitos de precisión
    //double = 15 dígitos de precisión
    double numeroPi = 3.14159;
        cout << fixed;
        //Coloca un punto fijo
    cout << setprecision(4);
    cout << "El valor de Pi es:" << numeroPi << endl;
    cout << endl;
    
//Entrada y redondeo de decimales
    float estatura;
    cout << setprecision(2);
    cout << "¿Cuánto mides?";
        cout << endl;
        cin >> estatura;
        cout << endl;
        cout << "Tu estatura es:" << estatura << endl;
        cout << endl;

//Constante: Valor que no cambia a lo largo de todo el código
        const int velocidadLuz = 300000;
            cout << "La velocidad de la luz es :" << velocidadLuz << endl;

        return 0;

}

