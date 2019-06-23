// eb82_ParamArray03.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra el paso de Arrays como parámetros en funciones en C++
// Este programa ilustra como se modifica un arreglo dentro de una función
// y su afectaciòn en la función principal
// 2019, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
using namespace std;

int CapturaAlumnos(string [], int NumAlumnos);

int main()
{
    int NumAlumnos = 0;
    
    cout << "Escribe el número de alumnos a registrar: ";
    cin >> NumAlumnos;
    string alumnos[NumAlumnos];

    
    CapturaAlumnos(alumnos, NumAlumnos);
    
    for (int i=0; i<NumAlumnos; i++)
        {
            cout << "Alumno " << i+1 << " : "<< alumnos[i] << endl;
        }
     return 0;
}

int CapturaAlumnos(string NombreAlumno[], int NumAlumnos)
{
   
for (int i=0; i<NumAlumnos; i++)
    {
        cin >> NombreAlumno[i];
    }

    return 0;
}
