// eb58_funciones_include2.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra la inclusión de librerías de mayo uso y el uso de algunas
// de las funciones más representativas
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream> // Permite usar cin, cout, min(), max()
#include <cmath>    // Permite usar sqrt(), pow()
#include <time.h>   // Permite usar time_t, tm, time, asctime
#include <algorithm>// Permite usar max, min
#include <random>   // Permite usar srand, rand

using namespace std;

int main()
{
    string entrada;
    int edad = 0;
    float calculo = 0;

    // Requiere de iostream
    cout<<"Escribe tu nombre: ";
    cin >> entrada;
    cout<<"Escribe tu edad: ";
    cin >> edad;
    cout << "Bienvenid@" << entrada << "\n";

    // Requiere cmath

    calculo = sqrt(edad);
    cout<<"La raíz de tu edad es: " << calculo << "\n";
    calculo = pow(edad,3);
    cout<<"Tu edad elevada al cubo es: " << calculo << "\n";

    // Requiere time.h

    time_t horaSistema;
    struct tm * timeinfo;

    time (&horaSistema);
    timeinfo = localtime (&horaSistema);
    cout << "Hora y fecha local: " << asctime(timeinfo);

    // Requiere algorithm
    cout << "max(1,2)==" << max(1,2) << '\n';
    cout << "min(2,1)==" << max(2,1) << '\n';
    cout << "max('a','z')==" << max('a','z') << '\n';
    cout << "max(3.14,2.73)==" << min(3.14,2.73) << '\n';

    // Requiere random
    srand((unsigned)time(0));

    int semilla;

    semilla = rand();
    cout << "La semilla vale =" << semilla  << '\n';

    cin.get();  // Requiere string

    return 0;
}
