// eb32_incremento3.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se utiliza un contador y un acumulador para registra el promedio de los valores introducidos
// Se ilustra el uso de incrementos
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int i = 0;  //La inicialización de variables es muy importante.
    double total = 0; //Acumulador para la suma de valores
    double entrada;
    int valorTerminar = -9999;   //valor para indicar el fin de entradas
    bool terminar = false;
    
    
    cout << "Este programa promedia los valores que escribas " << endl;
    cout << "utiliza sólo números, escribe " << valorTerminar << " para terminar" << endl << endl;
    
    while (!terminar)
    {
        cout << "Escribe el valor "  << endl;
        cin >> entrada;
        
        if (entrada == valorTerminar) {
            terminar = true; 
        } else {
            terminar = false; 
            i = i + 1;
            total = total + entrada; 
        }
    }

    cout << "El total es: " << total << endl;  
    cout << "El total de valores introducidos es: " << i << endl;  
    cout << "El promedio es: " << (total / i) << endl;  
    return 0;
}
