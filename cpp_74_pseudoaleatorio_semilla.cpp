// cpp_74_pseudoaleatorio_semilla.cpp
// Se ilustra el uso de la semilla  srand al utilizar rand() 
// para generar números aleatorios
// 2019, Por http://about.me/carlosgbr
// Versión 1
// Revisa todo el código del tutoral en: https://github.com/carlosgbr/
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int valor1, valor2, valor3;
    
    for (int i=1; i<=3; i++) {
        
        cout << "Corrida: " << i << endl;
        valor1 = rand();             // Genera un valor entre 0 y RAND_MAX
        cout << "Sin semilla: " << valor1 << endl;
        
        srand(40);                  // definimos una semilla
        
        valor2 = rand();             // Genera un valor entre 0 y RAND_MAX
        cout << "valor2: " << valor2 << endl;
        valor3 = rand() % 100 + 1;   // Genera un valor entre 1 y 100
        cout << "valor3: " << valor3 << endl;
        
        srand(1);                   // Devolvemos la semilla a su valor inicial
    }    
    
    return 0;
}
