// precedencia1.cpp
// Este programa ilustra la precendencia de operadores
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.tutorialspoint.com/compile_cpp_online.php
#include <iostream>

using namespace std;

int main()
{
    float resultado = 0;
    
    //La expresión original es 6/2(2+1)
    resultado = 6/2*(2+1);
    cout << "Y el resultado al evaluar 6/2(2+1) en C++ es..." << resultado << endl; 
   
    return 0;
}
