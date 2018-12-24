// cpp_49_Matriz01.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra el uso de Arreglos Bidimensionales o Matrices
// Se ilustra la inicialización, la captura y el volcado de una Matriz 
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    const int columna = 2;
    const int fila = 3;
    
    int Matriz [columna][fila];
    
    // Inicialización de la matriz, no es estricatamente necesaria, pero se
    // utiliza para ilustrar el concepto y los bucles anidados.
    for (int i = 0; i < columna; i++)   //Con este bucle recorremos las columnas
    {
        for (int j = 0; j < fila; j++) // Este bucle recorre las filas POR CADA COLUMNA
        {
            Matriz[i][j] =0;
        }
    }
    
    
    cout<<"A continuación se te piden los valores para la Matriz" << endl;
    
    for (int i = 0; i < columna; i++)   //Con este bucle recorremos las columnas
    {
        for (int j = 0; j < fila; j++) // Este bucle recorre las filas POR CADA COLUMNA
        {
            //Mostramos al usuario en qué posición estamos
            cout << "Escribe el valor del elemento [" << i << "][" << j << "]: "; 
            cin >> Matriz[i][j];
        }
    
    }
    
    cout<<"Volcado de la matriz on los datos capturados por el usuario" << endl;
    
    for (int i = 0; i < columna; i++)   //Con este bucle recorremos las columnas
    {
        for (int j = 0; j < fila; j++) // Este bucle recorre las filas POR CADA COLUMNA
        {
            //Mostramos al usuario el contenido de la matriz.
            cout << "[" << i << "][" << j << "]: " << Matriz[i][j] << endl;
        }
    }
    
    
    return 0;
}
