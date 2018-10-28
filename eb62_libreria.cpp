// eb62_libreria.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Ejemplo para llamar bibliotecas definidas por el usuario.
// Requiere conversion.h
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
#include "conversion.h"
using namespace std;

int main()
{
    int numeroDecimal = 0;
    
    cout<<"Este programa realiza la conversión de un número decimal en su ";
    cout<<"equivalente en los 3 sistemas numéricos más conocidos. " << endl;
    cout<<"Escribe un número entero a convertir: ";
    
    cin >> numeroDecimal;
    
    cout<<"El número: " << numeroDecimal << " base 10, equivale a: " << endl;
    cout<<"El número: " << decimalABinario(numeroDecimal) << " base 2" << endl;
    cout<<"El número: " << decimalAOctal(numeroDecimal) << " base 8" << endl;
    cout<<"El número: " << decimalAHexadecimal(numeroDecimal) << " base 16" << endl;
    return 0;
}
