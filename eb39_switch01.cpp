// eb39_switch01.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra la estructura switch
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int a, b, total;
    int seleccion;
    
    cout<<"Bienvenid@, este programa realizará operaciones aritméticas" << endl;
    cout<<"sobre 2 cantidades que escribas" << endl << endl;
    cout<<"Escribe el primer número: ";
    cin>>a;
    cout <<"Escribe el segundo número: ";
    cin>>b;
    
    cout<<endl<<"Indica el número de la operación que desees realizar: " <<endl;
    cout<<"(1) Suma" << endl;
    cout<<"(2) Resta" << endl;
    cout<<"(3) Producto" << endl;
    cout<<"(4) División Entera" << endl;
    cout<<"(5) Módulo" << endl;
    cin>>seleccion;
    
    //Para realizar la operación solicitada utilizamos una estructura switch
    //Intencionalmente se ha omitido el uso de break;
    switch (seleccion) {
        case 1: cout << "La suma es: " << a + b << endl;
        case 2: cout << "La resta es: " << a - b << endl;
        case 3: cout << "El producto es: " << a * b << endl;
        case 4: cout << "La división es: " << a / b << endl;
        case 5: cout << "El módulo es: " << a % b << endl;
        default: cout << "Opción no válida" << endl;
    } //Fin de switch

    cout<<"Gracias por utilizar este programa" << endl;

    return 0;
}
