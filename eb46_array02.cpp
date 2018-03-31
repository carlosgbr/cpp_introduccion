// eb46_array02.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra la inicialización y lectura de arreglos utilizando ciclos for
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
   int numeros[5], suma = 0;
    cout << "Introduce 5 números: ";
    
    //  Almacenamos los 5 números introducidos en un arreglo
    //  Encontramos la suma de dichos números
    for (int i = 0; i < 5; ++i) 
    {
        cin >> numeros[i];
        suma += numeros[i];
    }
    
    cout << "Suma = " << suma << endl;  
    
    
    // En esta sección se ilustra el uso de constantes para acceder a los
    // límites del arreglo.
    
    const int ElementosArray = 5;
    float numprom[ElementosArray], sumap = 0, promedio = 0;
    cout << "Introduce " << ElementosArray << " números para promediar: ";
    
    //  Almacenamos los 5 números introducidos en un arreglo
    //  Encontramos la suma de dichos números y realizamos el promedio
    for (int i = 0; i < ElementosArray; ++i) 
    {
        cin >> numprom[i];
        sumap += numprom[i];
        promedio = sumap/ElementosArray;
    }
    
    cout << "Promedio = " << promedio << endl;  
    
    return 0;
}
