// eb42_enum01.cpp
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

return 0;
}
