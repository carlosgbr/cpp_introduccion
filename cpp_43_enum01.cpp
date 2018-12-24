// cpp_43_enum01.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra la decalaración de tipos enumerados
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
enum TipoFigura {Cuadro, Triangulo, Circulo};

TipoFigura Figura; //Definimos Figura de tipo enumerado TipoFigura

Figura = Circulo; 

switch (Figura) {
    case Cuadro: cout << "Actividades para Cuadros"; break;
    case Triangulo: cout << "Actividades para Triángulo"; break;
    case Circulo: cout << "Actividades para Círculo"; break;
    default: cout << "Función no implementada"; break;
}

    //Revisamos el valor predeterminado que asigna el compilador a los enumeradores
    
    cout << endl<< endl << "Valor de Cuadro: " << Cuadro << endl;
    cout << "Valor de Triangulo: " << Triangulo << endl;
    cout << "Valor de Circulo: " << Circulo << endl;

return 0;
}
