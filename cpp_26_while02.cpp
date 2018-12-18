// eb26_while02.cpp
// Uso de while02
// Este programa ilustra el uso del bucle While realizando la suma de enteros
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int num, suma;
    cout <<"Este programa sumará todos los números enteros que introduzcas" << endl;
    cout << endl;
    cout<< "Escribe número enteros, cuando desees terminar, escribe cero" << endl;
    
    num = 1;
    suma = 0;
    
    while (num != 0)
    {
        cout << "Escribe el número a sumar (0 para terminar): " << endl;
        cin >> num;
        suma = suma + num;
    }
    
    cout << "La suma total es: " << suma << endl;

    return 0;
}
