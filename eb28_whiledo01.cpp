// eb28_whiledo01.cpp
// Uso de while do
// Se ilustra un uso del ciclo while - do con  un menú de ejemplo, el ciclo se
// ejecuta mientras el usuario no presione el número 3, además se ilustra el 
// uso de una condición de parada utilizando una variable en lugar de una 
//comparación.
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int opcion = 0;
    bool terminar = false;
    
    cout << "Este programa realiza la conversión de temperaturas" << endl;
    
    do  // Inicio del ciclo do - while
    {
        cout << "Escribe el número según la conversión que deseas realizar:" << endl << endl;
        
        cout << "1. Convertir Grados centígrados a Fahenheit:" << endl;
        cout << "2. Convertir Grados Fahenheit a Centígrados:" << endl;
        cout << "3. Salir del programa" << endl;
        
        cin >> opcion;
        
        cout << "Seleccionaste la opción:" << opcion << endl;
        
        //Evaluamos la selección del usuario
        if (opcion == 3) {
            cout << "Elegiste salir, gracias por utilizar este programa";
            terminar = true; //El ciclo debe continuar si se pulsa 3
        } else {
            terminar = false; //Cualquier otro número permite que siga el programa
        }
    } while (!terminar); //Observa que en lugar de una comparación, se utiliza
                         //el valor de una variable para determinar si continuamos

    return 0;
}
