// ifpromedio.cpp
// Se ilustra la toma desición a partir de un promedio determinado utilizando 
// la sentencia if / else
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    
    //const minima = 6;
    //const exento = 9;
    float primero, segundo, tercero, cuarto;
    float promedio;

    cout << "Este programa te permite obtener el promedio de calificaciones de un" << endl;
    cout << "alumno, y determinar si está reprobado, aprobado o exento." << endl << endl;
    
    cout << "Escribe las calificaciones conforme se te indique, pulsa ENTER para aceptar" << endl;
    
    cout << "Primer periodo: ";
    cin  >> primero;
    cout << "Segundo periodo: ";
    cin  >> segundo;
    cout << "Tercer periodo: ";
    cin  >> tercero;
    cout << "Cuarto periodo: ";
    cin  >> cuarto;

    promedio = (primero + segundo + tercero + cuarto)/4;
    
    cout << "Tu promedio global es: " << promedio << endl;
    
    //Determinamos el estatus del alumno de acuerdo al promedio.
    
    if (promedio < 7) {
        cout << "Estás reprobado" << endl;
    }
    else {
        cout << "Estás aprobado, felicidades" << endl;
    }
    
    return 0;
}
