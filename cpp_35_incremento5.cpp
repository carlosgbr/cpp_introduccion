// cpp_35_incremento5.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra cómo se evalúa ++i, i++, --i, i--
// Se ilustra el uso de operadores de incremento
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int i = 1;  //La inicialización de variables es muy importante.
    int j = 1; 
    
    cout << "El operador ++expresión y --expresión en acción" << endl;
    cout << "Valores iniciales i = " << i << ", j = " << j << endl;
    //Si ++ precede a la variable, por ejemplo. ++a, el valor devuelto es 
    //el valor en el contador después que se ha incrementado.
    cout << "++i =" << ++i << endl;
    //Si ++ sigue a la variable, por ejemplo. a++, el valor devuelto es 
    //el valor en el contador antes que se haya incrementado.
    cout << "j++ =" << j++ << endl;
    i = 1;  //"reseteamos" valores
    j = 1;
    cout << "--i =" << --i << endl; //Decrementa i y lo devuelve en i
    cout << "j-- =" << j-- << endl; //Devuelve j antes que se incremente
    
    return 0;
}
