// cpp_77_factorial.cpp
// Se implementa un sencillo juego de "Adivina el número, el usuario tiene 2
// oportunidades en un rango de 1 a 10
// 2019, Por http://about.me/carlosgbr
// Versión 1
// Revisa todo el código del tutoral en: https://github.com/carlosgbr/
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

long long factorial(long long n)
 {
    if(n==1 || n==0)   // condición de parada
        return 1;
     return n * factorial(n - 1);   // Llamada recursiva a la función y condición de parada
 }
 
 int main()
 {
    int n; 
    cin >> n; 
    cout<< "Factorial de  "<< n <<" es " << factorial(n) << endl;
    return 0;
 }
