// cpp_48_array03.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra el uso de Arreglos Unidimensionales o Vectores
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
   const int TamArray = 100;
   int valores[TamArray];
   float suma = 0, promedio = 0;
   
    
   cout << "A continuación presentamos el cuadrado del 1 al " << TamArray << endl;
    
    for (int i = 1; i <= TamArray; ++i) 
    {
        if (i<=10) {
            cout << i << " - " << i*i << "\t\t";
        } else {
            cout << i << " - " << i*i << "\t";    
        }
        
        if (i % 5==0) {
            cout << endl;
        }
    }
    
    cout << "Ahora mostramos el promedio de los cuadrados del 1 al " << TamArray << endl;
    
    for (int i = 1; i <= TamArray; ++i) 
    {
        suma += i*i;
        promedio = suma/TamArray;
        
    }
    
    cout << endl;
    cout << "El promedio es: " << promedio << "... esto suena a estadística"; 
    return 0;
}
