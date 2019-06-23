// eb80_ParamArray01.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra el paso de Arrays como parámetros en funciones en C++
// 2019, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
#include <string>

using namespace std;

int MostrarArray(string OpcionMenu[], int NumOpciones);

int main()
{
    int NumOpciones = 4;
    string Menu[] = {"Archivo", "Edición", "Herramientas", "Salir"};
    
    MostrarArray(Menu, NumOpciones);

    return 0;
}

//Despliega las opciones que se reciben en el Arreglo
int MostrarArray(string OpcionMenu[], int NumOpciones)
{
 
    for (int i=0; i<NumOpciones; i++)
    {
        cout << OpcionMenu[i] << endl;
    }
    
    return 0;
}
