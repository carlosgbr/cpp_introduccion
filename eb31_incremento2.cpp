// eb31_incremento2.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se utiliza un contador para verificar las veces que se introduce una contraseña
// Se ilustra el uso de incrementos
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int i = 1;  //La inicialización de variables es muy importante.
    string contrasena = "1234"; //Establecemos la contraseña válida
    string contrauser; //Almacena la contraseña que escrie el usuario
    int intentosmax = 3; //Establecemos la cantidad máxima de intentos permitidos
    
    
    cout << "Escribe la contraseña de acceso, solo tienes " << intentosmax;
    cout << " intentos, para escribir la contraseña correcta" << endl << endl;
    
    while (i <= intentosmax)
    {
        cout << "Escribe la contraseña de acceso, intento " << i << " de " << intentosmax << endl;
        cin >> contrauser;
        
        if (contrauser == contrasena) {
          cout << "Contraseña correcta, acceso otorgado!" << endl;
          break;
        } else {
          cout << "***Contraseña incorrecta, acceso denegado!" << ", intento " << i << " ***" << endl;
          i = i + 1;
          
          if (i == intentosmax) {
            cout << "Has excedido la cantidad de intentos permitidos, el programa explotará!" << endl;
          }
        }
    }

    cout <<"El programa ha terminado" << endl;  
    return 0;
}
