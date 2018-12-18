// eb30_incremento1.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Este programa presenta el cuadrado de los números del 1 al 10
// Se ilustra el uso de incrementos
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int i = 1;  //La inicialización de variables es muy importante.
    
    while (i <= 10)
    {
        cout<<"El cuadrado de : " << i << " es " << (i * i) << endl;     
        i = i + 1; //Prueba poniendo esta sentencia antes de cout
    }

    return 0;
}
