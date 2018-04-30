// eb52_punteros3.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra la manipulación de variables con punteros.
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int var = 50;   // definimos una variable "normal"
    int  *p;        // definimos *p como puntero a un entero
    p = &var;       // guardamos el valor de la dirección en el puntero
    cout << var << endl;
    // Muestra 50 (el valor de var)
    cout << p << endl;
    // muestra 0x7fff0e40086c (la dirección de memoria de var)
    cout << *p << endl;
    /* Muestra 50 (el valor de la variable 
     almacenada en el puntero) */
    *p = 100; 
    /* cambiaos el valor almacenado dentro de la 
     variable con la ayuda del puntero */
    cout << *p << endl;
    /* Muestra 100 (el valor de la variable
     almacenada en el puntero p) */
    cout << var << endl;
   /* Muestra 100. (el nuevo valor de var que fue asignado se debió a *p=100) */


    return 0;
}
