// if2.cpp
// Uso de If para controlar las posibilidades verdadero / falso
// de una condición
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int edad;
    
    cout << "Escribe cuántos años tienes: ";
    cin >> edad;
    
    //Indica si el usuario es mayor de edad
    
    if (edad >= 18) {
    cout << "Puedes pasar";
    }
    
    //Indica si el usuario es mayor de edad
    if (edad < 18) {
    cout << "Acceso denegado, eres menor de edad";
    }

return 0;
}
