#include <iostream>
#include <string>
using namespace std;

//Web oficial de C++: https://isocpp.org/

// Comentario en una línea

/*
Comentario 
en 
varias
líneas
*/

int main(){

    int varible = 0;
    const int CONSTANTE = 0;

    // Tipos de datos

    char caracter = 'A';
    int entero = 1;
    // Con precisión de 7 decimales
    float decimal = 1.1234567;
    // Con precisión de 15 decimales
    double decimalDoble = 1.123456789012345;
    bool booleano = true;
    string cadena = "Hola mundo";

    cout << "Hola, C++"<< endl;

    cout << "Constante: " << CONSTANTE << endl;
    cout << "Caracter: " << caracter << endl;
    cout << "Entero: " << entero << endl;
    cout << "Decimal con precisión de 7: " << decimal << endl;
    cout << "Decimal con precisión de 15: " << decimalDoble << endl;
    cout << "Booleano: " << booleano << endl;
    cout << "Cadena: " << cadena << endl;
    return 0;
}
