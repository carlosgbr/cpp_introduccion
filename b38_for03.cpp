// eb38_for03.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustran ciclos for anidados
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
int i, j;

for (i = 0; i <= 10; i++)
{
    for (j = 0; j <= i; j++)
    {
        cout << "*";
    }
    
    cout << "\n";
}

    return 0;
}
