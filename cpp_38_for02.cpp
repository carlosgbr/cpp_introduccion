// cpp_38_for02.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustran más usos del ciclo for en C++
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    //Sumamos únicamente los números pares del 1 al 100
    
    int sumapares = 0;     //Prueba el resultado quitando la inicizalización
    
    for (int k=0; k <= 100; k+=2)    //el contador k tiene incrementos de 2
    {
        sumapares += k;             //realizamos la suma de los elementos pares
    }
    
    cout << "Suma total de números pares:" << sumapares << endl;
    
    //**********************
    
    //Sumamos únicamente los números impares del 1 al 100, utilizamos una 
    //técnica más "popular" para determinar los números impares.
    
    int sumaimpares = 0;  
    
    for (int k=0; k <= 100; k++)    //k como un contador clásico k++
    {
    
    // con el módulo de k%2, podemos determinar si un número es par o impar
        if ((k%2) != 0) {  
            sumaimpares += k;    //realizamos la suma de los elementos impares
        }
    }
    
    cout << "Suma total de números impares:" << sumaimpares << endl;
    
    
    //**********************
    
    //Sumamos TODOS los números del 1 al 100, a modo de comprobación
    //Utilizamos un contador de decremento para recorrer la lista., lo cual 
    //requiere que modifiquemos el valor inicial y la condición del bucle for.
    
    int suma = 0;  
    
    for (int k=100; k > 0; k--)    //k como un contador de decremento k--
    {
            suma += k;    //realizamos la suma de los números
    }
    
    cout << "Suma total de números:" << suma << endl;
    
    return 0;
}
