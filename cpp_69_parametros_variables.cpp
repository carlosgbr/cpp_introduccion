// cpp_69_parametros_variables.cpp
// Se ilustra el uso de parámetros predeterminados  
// 2019, Por http://about.me/carlosgbr
// Versión 1
// Revisa todo el código del tutoral en: https://github.com/carlosgbr/
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <string>
#include <iostream>

using namespace std; 

int CalculaArea(int lado1 = 1, int lado2 = 4, int lado3 = 6)
{
    return lado1 * lado2 * lado3;
}

int main()
{
    int area = CalculaArea(2);
    cout << area;
    
    return 0;
}
