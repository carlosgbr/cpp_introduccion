// cpp_75_adivinanumero.cpp
// Se ilustra el uso de la semilla srand y la generación de "veraderos"
// números aleatorios
// 2019, Por http://about.me/carlosgbr
// Versión 1
// Revisa todo el código del tutoral en: https://github.com/carlosgbr/
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
#include <cstdlib>      // rand, srand
#include <ctime>         // time

using namespace std;

int main()
{
    int valorrnd = 0;       // Número que debemos adivinar
    int valorusr = 0;       // Número introducido por el usuario
    int contador = 0;       // Para registrar el número de iteraciones
    srand(time(NULL));      // Generamos semilla basada en el reloj
    
    valorrnd = 1+rand()%10;
    
    cout << "Este programa genera un valor entre 1 y 10, tienes 2 oportunidades" << endl;
    cout << "para acertar el número correcto." << endl;
    
    do {
        contador += 1;
        cout << "Escribe un número entre 1 y 10" << endl;
        cin >> valorusr;
        
        if (valorusr == valorrnd) {
            cout << "Ganaste!, el número es correcto" << "(" << valorrnd << ")";
            break;
        } else {
            cout << "Lo siento, el número no es ese." << endl << endl;
        }
    }
    while (contador < 2);
    
    if (contador = 2) {
        cout << "Perdiste, más suerte para la próxima, el número es: " << valorrnd;
    }
    
    return 0;
}
