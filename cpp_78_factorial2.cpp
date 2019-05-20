// cpp_78_factorial2.cpp
// Variación de una función recursiva para calcular el factorial de un número
// 2019, Por Geof en Sololearn
// Versión 1
// Revisa todo el código del tutoral en: https://github.com/carlosgbr/
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

long long  factorial (long long n, long long r) {
      if (n == 0) {
          return r;
      }
      else {
          return factorial (n - 1, n * r);
      }
 }
 
 int main()
 {
    long long n; 
    cin >> n; 
    cout<< "Factorial de  "<< n <<" es " << factorial(n,1) << endl;
    return 0;
 }
