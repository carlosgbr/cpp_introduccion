// eb80_ParamArray01.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra la declaración el uso de funciones y estructuras de control
// El programa tiene un "error" intencional, las fórmulas de Conversión
// de grados centígrados a Kelvin y de Kelvin a grados centígrados están 
// invertidas, esto para ilustrar en la lección una de las ventajas de las 
// funciones: Se modifica el código únicamente en la sección que tiene el error
// sin tener que tocar el código en el programa principal.
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


int MostrarArray(string OpcionMenu[], int NumOpciones)
{
 
    for (int i=0; i<NumOpciones; i++)
    {
        cout << OpcionMenu[i] << endl;
    }
    
    return 0;
}
