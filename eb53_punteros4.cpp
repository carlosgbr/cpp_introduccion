// eb53_punteros4.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra la declaración de punteros en la misma línea
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{

// Primero compila (ejecuta) el programa como se presenta,
// Una vez que compruebes que el programa compila, quita los comentarios de la
// siguiente sección y vuelve a compiar. Compara el resultado.

/*    int var = 50;
    int* p1, p2, p3;

    p1 = &var;      // guardamos el valor de la dirección en el puntero
    p2 = &var;      // devuelve el error error: invalid conversion from 'int*' to 'int' [-fpermissive]
    p3 = &var;      // devuelve el error error: invalid conversion from 'int*' to 'int' [-fpermissive]
    
 */
 
    int var = 50;
    int* h1, *h2, *h3;

    h1 = &var;      // guardamos el valor de la dirección en el puntero
    h2 = &var;      // devuelve el error error: invalid conversion from 'int*' to 'int' [-fpermissive]
    h3 = &var;      // devuelve el error error: invalid conversion from 'int*' to 'int' [-fpermissive]
 
 
    return 0;
}
