// cpp_79_factorial3.cpp
// Se implementan varias funciones con técnicas recursivas
// Factorial, Fibonacci, Multiplicación y Potencia
// 2019, Adaptado a C++ Por http://about.me/carlosgbr
// Versión 1
// Revisa todo el código del tutoral en: https://github.com/carlosgbr/
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int factorial(int n){
   if(n==0)
       return 1;
   else
       return factorial(n-1)*n;   
}

void factor(int n, int *res){
   int aux;  
   if(n==0)
       *res = 1;
   else{        
       factor(n-1,&aux);   
       *res = aux * n;
   }
     
}

int multiplicacion(int a, int b){
   if(a==0 || b==0)
      return 0;
   else
      return multiplicacion(a,b-1) + a;   
}

int potencia(int a, int b){
   if(b==0)
      return 1;
   else
      return potencia(a,b-1) * a;   
}

int fibonacci(int n){
    if(n==1 || n==2)
       return n-1;
    else
       return fibonacci(n-1) + fibonacci(n-2);   
}

int main()
{
   int n, solucion;
   int a, b;
   cout << "Ingrese numero : ";
   cin >> n;

   cout << "El factorial de "<< n << " es " << factorial(n) << endl;
   factor(n,&solucion);
   cout << "El factorial de " << n << " es " << solucion << endl;

   cout << "El termino " << n << " de fibonacci es " << fibonacci(n)  << endl;


   cout << "Ingrese valor de a : " << endl;
   cin >> a;
   cout << "Ingrese valor de b : " << endl;
   cin >> b;

   cout << a << " * " << b << " = " << multiplicacion(a,b) << endl;
   cout << a << " elevado a " << b << " = " << potencia(a,b) << endl;
   
    return 0;
}
