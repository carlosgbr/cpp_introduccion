// cpp_44_enum02.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra la decalaración de tipos enumerados y su asignación de valores
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler


#include <iostream>

using namespace std;

int main()
{
enum TipoEleccion {Piedra, Tijeras = 5, Papel};

TipoEleccion Eleccion; //Definimos Figura de tipo enumerado TipoEleccion

    //Revisamos el valor predeterminado que asigna el compilador a los enumeradores
    
    cout << endl<< endl << "Valor de Piedra: " << Piedra << endl;
    cout << "Valor de Tijeras: " << Tijeras << endl;
    cout << "Valor de Papel: " << Papel << endl;

return 0;
}
