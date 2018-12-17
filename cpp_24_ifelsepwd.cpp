// ifelsepwd.cpp
// Uso de If / else
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
using namespace std;

int main()
 {
 const int pwd = 1234; //contraseña válida de Acceso
 const string tel = "5658-1111";
 
 int pwdusr; 
 
 cout << "Para poder mostrar el teléfono debes escribir la contraseña correcta" << endl;
 cout << "A continuación escribe la contraseña de acceso." << endl;
 cin >> pwdusr;
 
 if (pwdusr == pwd) {
 cout << "*** Contraseña correcta ***" << endl;;
 cout << "El teléfono del contacto es: " << tel << ", úsalo con criterio";
 } 
 else {
 cout << "Contraseña errónea \b\b\b" << endl;
 cout << "Por seguridad, la información se ha eliminado";
 }
 
 return 0;
}
