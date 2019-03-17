// cpp_72_pseudoaleatorio.cpp
// Se ilustra el uso de la función rand() para generar números pseudoaleatorios
// 2019, Por http://about.me/carlosgbr
// Versión 1
// Revisa todo el código del tutoral en: https://github.com/carlosgbr/
// Compilado en https://www.onlinegdb.com/online_c++_compiler
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a;
    
    a = rand();             // Genera un valor entre 0 y RAND_MAX
    cout << a << endl;
    cout << "RAND_MAX para este equipo tiene un valor de: " << RAND_MAX;
    return 0;
}
