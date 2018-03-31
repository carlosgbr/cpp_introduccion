// eb45_array01.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra la declaración de arrays y la asignaciòn y recuperación de 
// valores en el aareglo.
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    float arrTemp[5];   //Definimos un Arreglo de 5 elementos reales 
    
    //Asignamos valores al Arreglo
    arrTemp[0] = 2;
    arrTemp[1] = 5;
    arrTemp[2] = 8;
    arrTemp[3] = -9;
    arrTemp[4] = 100;
    
    cout << "A continuación se muestran los valores actuales del arreglo" << endl;
    
    cout << arrTemp[0] << endl;
    cout << arrTemp[1] << endl;
    cout << arrTemp[2] << endl;
    cout << arrTemp[3] << endl;
    cout << arrTemp[4] << endl;
    
    //Reasignamamos valores en el arreglo de distintas formas.
    arrTemp[0] = 82;    //Asignación directa
    arrTemp[1] = arrTemp[4];    //Asignación de un elemento del array
    arrTemp[2] = 8*3;           
    arrTemp[3] = -9 * arrTemp[2];
    
    cout << "¿Cuál es la temperatura final?:" << endl;
    cin >> arrTemp[4]; 
    
    cout << "Valores finales del arreglo" << endl;
    
    cout << arrTemp[0] << endl;
    cout << arrTemp[1] << endl;
    cout << arrTemp[2] << endl;
    cout << arrTemp[3] << endl;
    cout << "Temperatura final: " << arrTemp[4] << endl;
    
    // Observa la salida de estas sentencias
    cout << "Salida fuera de índice 1:" << arrTemp[5] << endl;
    cout << "Salida fuera de índice 2:" << arrTemp[255] << endl;

    return 0;
}
