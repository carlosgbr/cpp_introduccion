// eb57_funciones3.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra el uso de parámetros variables en una función
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
#include <stdarg.h> // Necesaria para utilizar  va_list, va_start, va_arg, va_end

using namespace std;

float Promedio(int calificacion, ...)   // Los ... indican que son parC!metros variables
{
    float sumaCalif = 0;
    int cuenta = 0;
    int indice = calificacion;  // C-dice = calificacion para determinar un punto
                                // para determinar cuando es el C:ltimo valor.
    
    va_list marcador;           // Definimos a marcador como lista variable
    
    va_start(marcador, calificacion); // Asignamos el argumento al puntero marcador

while (indice != -1){ 
    
        sumaCalif += indice; 
        cuenta++;
        indice = va_arg(marcador,int); //recuperamos el valor actual de marcador
                                       // le asignamos tipo
    }
    
  va_end (marcador);    // Terminamos la lista variable

    return sumaCalif;
}

int main()
{
   
   cout << "La suma de boletas entregadas es: " << Promedio(1,2,3,9,-1) << endl;
   cout << "La suma de boletas entregadas es: " << Promedio(6, 8, 9, 10, 4, 7, 9,-1) << endl;
   cout << "La suma de boletas entregadas es: " << Promedio(10, 7,-1) << endl;
   cout << "La suma de boletas entregadas es: " << Promedio(10, 10, 0,-1) << endl;

    return 0;
}
