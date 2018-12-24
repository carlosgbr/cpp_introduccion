// cpp_60_funciones_include1.cpp 
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra la inclusión de librerías estándar, utilizamos string como ejemplo
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string entrada; 
    
    cout<<"Escribe una palabra: ";
    cin >> entrada;
    
    cout << "Palabra actual: " << entrada << "\n";
    cout << "Tamaño: " << entrada.size() << "\n";
    cout << "Longitud: " << entrada.length() << "\n";
    cout << "Capacidad: " << entrada.capacity() << "\n";
    cout << "Tamaño Máximo: " << entrada.max_size() << "\n";
    
    
    
    entrada.clear();    //Limpiamos el contenido de la variable
    
    cout << "Palabra actual: " << entrada << "\n";
    cout << "Tamaño: " << entrada.size() << "\n";
    cout << "Longitud: " << entrada.length() << "\n";
    cout << "Capacidad: " << entrada.capacity() << "\n";
    cout << "Tamaño Máximo: " << entrada.max_size() << "\n";

    return 0;
}
