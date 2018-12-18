// cpp_33_decremento1.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se utiliza un contador para contar las palabras introducidas
// Se ilustra el uso de DECREMENTOS
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    string palabra;
    string texto;
    int numPalabras;   //valor para indicar el fin de entradas
    bool terminar = false;
    
    
    cout << "Este programa mostrará en una línea las palabras que escribas " << endl;
    cout << "Primero indicarás cuántas palabras vas a introducir" << endl << endl;
    
    cout << "¿Cuántas palabras escribirás?"  << endl;
    cin >> numPalabras;
    
    while (numPalabras > 0) 
    {
        cout << "Escribe la pabra "  << i << endl;
        cin >> palabra;
       
       i = i + 1; // No es indispensable pero lo utilizamos para mejorar la presentación
       texto = texto + palabra; //Concatenamos las palabras introducidas
       numPalabras = numPalabras - 1; 
    }

    cout << "La cadena de texto es " << texto << endl;  
    return 0;
}
