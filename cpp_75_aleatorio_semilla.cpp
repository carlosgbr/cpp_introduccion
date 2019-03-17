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
    
    // Simulamos calificaciones en el rango de 5 a 10;
    for (int i=1; i<=20; i++) {
        valor = 5 + rand()%(11-5);
        
        cout << "Calificación Simulada" << i << ": " << valor << "\t\t\t\t";
        if (i%2 == 0) cout << endl;
    }    
    
    return 0;
}
