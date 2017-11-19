/******************************************************************************
    // ifBasico.cpp
   // Este programa muestra el uso de If
   // 2017, Por http://about.me/carlosgbr
   // Versión 1
   // Compilado en https://www.onlinegdb.com/online_c++_compiler
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int edad = 0;

    cout<<"Escribe tu edad en años: ";
    cin >> edad;
    
    //Con if comprobamos si el usuario es mayor de edad
    if (edad >= 18) {
        cout << "Eres mayor de edad" << endl;
    }
    
    cout<<"Aquí termina el programa";
    return 0;
}
