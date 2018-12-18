// cpp_38_OperadoresCompuestos1.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Este programa presenta el uso de los operadores de asignación compuesta
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int i = 10;
    int j = 2; 
    
    i += j;    //i = 12, equivale a  i = i + j
    cout << i << endl; 

    i = 10;
    j = 2; 
    
    i -= j;    //i = 8, equivale a  i = i - j
    cout << i << endl; 
    
    i = 10;
    j = 2; 
    
    i *= j;    //i = 20, equivale a  i = i * j
    cout << i << endl; 
    
    i = 10;
    j = 2; 
    
    i /= j;    //i = 5, equivale a  i = i / j
    cout << i << endl; 
    
    i = 10;
    j = 2; 
    
    i %= j;    //i = 0, equivale a  i = i % j
    cout << i << endl; 

    return 0;
}
