// cpp_75_aleatorio_semilla.cpp
// Se ilustra el uso de la semilla srand y la generación de "veraderos"
// números aleatorios
// 2019, Por http://about.me/carlosgbr
// Versión 1
// Revisa todo el código del tutoral en: https://github.com/carlosgbr/
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
#include <cstdlib>      // rand, srand
#include <ctime>         // time

using namespace std;

int main()
{
    int valor = 0;
    srand(time(NULL));
    
    for (int i=1; i<=20; i++) {
        valor = rand()%100;
        cout << "Número aleatorio " << i << ": " << valor << endl;
    }    
    
    return 0;
}
