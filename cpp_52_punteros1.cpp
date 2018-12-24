// cpp_52_punteros1.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra el acceso a la dirección que ocupan las varibles en memoria.
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int var1 = 3;
    int var2 = -98;
    int var3 = 25;
    
    cout << &var1 << endl;
    cout << &var2 << endl;
    cout << &var3 << endl;

    return 0;
}
