// variables.cpp
// Este programa ilustra la declaración de variables, la asignación de variables
// y el despliegue en pantalla de variables
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.tutorialspoint.com/compile_cpp_online.php

#include <iostream>
using namespace std;

int main() 
{ 
  //Primero definimos las variables antes de usarlas 
  int suma; 
  char respuesta; 
  bool continuar; 
  double pi;

  //asiganción de variables 
  suma = 3 + 2; 
  respuesta = 's'; 
  continuar = false; 
  pi = 3.141516; 

  //Desplegamos en pantalla el valor de nuestras varibles 
  cout << "suma es de tipo entero y tiene un valor de " << suma << endl; 
  cout << "respuesta es de tipo char y tiene un valor de " << respuesta << endl; 
  cout << "continuar es de tipo booleano y tiene un valor de " << continuar << endl; 
  cout << "pi es de tipo double y tiene un valor de " << pi << endl; 

  return 0; 
}
