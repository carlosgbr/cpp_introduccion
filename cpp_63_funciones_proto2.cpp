// cpp_63_funciones_proto2.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se define un par de funciones utilizando prototipos
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int esMayor(int a, int b); // Definimos el prototipo de nuestra función
int esMenor(int a, int b); // Definimos el prototipo de nuestra función

int main()
{
  int num1, num2;
  cout<<"Escribe un número entero: ";
  cin >> num1;
  cout<<"Escribe otro número entero: ";
  cin >> num2;
  cout<<"El mayor número introducido es: " << esMayor(num1, num2) << endl;
  cout<<"El menor número introducido es: " << esMenor(num1, num2);

  return 0;
}

// Definimos las funciones definidas en la cabecera.

int esMayor(int a, int b)
{
//Devuelve el número mayor entero de 2 números dados como parámetros
  if (a >= b) {
    return a;
    } else {
    return b;
  }

return 0;
}

int esMenor(int a, int b)
{
//Devuelve el número menor entero de 2 números dados como parámetros
if (a <= b) {
  return a;
  } else {
  return b;
  }

return 0;
}
