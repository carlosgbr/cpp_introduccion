// epp_37_for01.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustran 3 sos básicos del ciclo for
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int i;  //declaramos i
    
    for (i=0; i <= 10; i++) //Imprimimos una lista del 1 al 10
    {
        cout << i << endl;
    }
    
    
    //se ilustra la declaración de variables al momento de inciializarla en el bucle
    for (int j=65; j<= 122; j++)    //Imprimimos el alfabeto utilizando conversión de tipos
    {
        cout << char(j) << ", ";
    }
    

    //Sumamos únicamente los números pares del 1 al 100
    
    int sumapares = 0;     //Prueba el resultado quitando la inicizalización
    
    for (int k=0; k <= 100; k+=2)    //el contador k tiene incrementos de 2
    {
    
        sumapares += k;             //realizamos la suma de los elementos pares
        
    }
    
    //Revisa: ¿Qué ocurriría si esta sentencia estuviera dentro del bucle for?
    cout << sumapares;
    
    //Primero analiza que pasa con el siguiente código, después pon la siguiente 
    // sentencia dentro de la sentencia for después de >>> sumapares += k;  
    //   *** Añadir ***
    //   cout << k << " - " << sumapares << endl;  

    return 0;
}
