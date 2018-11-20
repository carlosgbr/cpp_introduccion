// eb63_funciones_main.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++ 
// http://ehack.info/leguaje-c-introduccion/ 
// Ejemplo para ilustrar la llamada de funciones por main()
// 2018, Por http://about.me/carlosgbr 
// Versión 1 
// Compilado en https://www.onlinegdb.com/online_c++_compiler 

#include <iostream>
#include <string>

using namespace std;

int validaEntrada(string fecha);
int convierteFecha(string fecha);

int main()
{
    string fecha;
    
    cout << "Este programa convierte una fecha en formato año, mes. día, sin espacios" << endl;
    cout << "Por ejemplo para la fecha 13 de noviembre de 2018 debes escribir" << endl;
    cout << "el año primero, el mes en seguida y el día al final: 20181113" << endl;
    cout << "Asegúrate de utilizar 8 dígitos para la fecha" << endl << endl;

    
    cout << "Introduce la fecha en formato (aaaammdd), deben ser 8 dígitos" << endl;
    cin >> fecha;

    if (validaEntrada(fecha) == 0)
    convierteFecha(fecha);
    else
        cout << "Por favor introduce la fecha en formato correcto.";

    return 0;
}

int validaEntrada(string fecha)
{
    int tamano = 8;
    int strtam;
    string tdia;
    string tmes;
    
    strtam = fecha.size();
    
    if (strtam != tamano) {
        cout << "Longitud de cadena incorrecta verifica que sean , 8 caracteres";
        return 1;
        exit;
    } 
    
    //Validamos el mes y el día
    
    tmes = fecha.substr (4,2);
    tdia = fecha.substr (6,2);
    
    if (tmes == "00") 
    {
        cout << "El mes no puede ser cero, elige un mes entre 01 y 12" << endl;
        return 1;
        exit;
    } else if (tmes > "12") {
        cout <<  "El mes no puede ser mayor que 12, elige un mes entre 01 y 12" << endl;
        return 1;
        exit;
    }

   
