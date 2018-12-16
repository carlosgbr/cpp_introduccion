// inicializacion_variables.cpp
// Este programa ilustra la inicialización de variables así como los valores 
// basura que toman las variables no inicializadas. 
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.tutorialspoint.com/compile_cpp_online.php

#include <iostream>
using namespace std;

int main()
   {
   //Inicialización de variables al momento de declararlas
   int edad_minima = 18; 
   char respuesta = 'n';
   bool autorizado = true;
   double pulgada = 2.54;
   
   //Variables sin inicalizar
   int edad_actual;
   double estatura;
   bool continuar;
   
   //mostramos el valor de las variables no inicializadas. 
   cout << "edad_actual es de tipo entero y tiene un valor de " << edad_actual << endl; 
   cout << "estatura es de tipo double y tiene un valor de " << estatura << endl; 
   cout << "continuar es de tipo bool y tiene un valor de " << continuar << endl; 

   return 0; 
}
