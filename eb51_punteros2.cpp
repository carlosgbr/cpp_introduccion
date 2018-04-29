// eb51_punteros2.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra el uso y definición de punteros en C++.
// Este ejemplo se adapta de https://www.programiz.com/cpp-programming/pointers
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int *pc, c;
    
    c = 5;
    cout << "Dirección de c (&c): " << &c << endl;
    cout << "Valor de (c): " << c << endl << endl;

    pc = &c;  // El puntero pc almacena la dirección de memoria de la variable c
    cout << "La dirección del puntero pc almacena (pc): "<< pc << endl;
    cout << "El contenido de la dirección del puntero pc almacena (*pc): " << *pc << endl << endl;
    
    c = 11;    // El contenido dentro de la dirección de memoria &c se cambia de 5 a 11.
    cout << "La dirección del puntero pc almacena (pc): " << pc << endl;
    cout << "El contenido de la dirección del puntero pc almacena (*pc): " << *pc << endl << endl;

    *pc = 2; 
    cout << "Dirección de c (&c): " << &c << endl;
    cout << "Valor de c (c): " << c << endl << endl;

    return 0;
}
