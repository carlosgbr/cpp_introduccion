// cin.cpp
// Este programa muestra el uso del stream de entrada cin(), con la información obtenida obtenemos el IMC 
// (IMC = Índice de masa corporal) utilizando la fórmula: IMC = masa / estatura^2 de acuerdo a 
// https://es.wikipedia.org/wiki/%C3%8Dndice_de_masa_corporal
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    char nombre[10];
    float peso, estatura, imc;
    
    cout << "Después de escribir el dato que se te pide, pulsa la tecla ENTER ó ACEPTAR" << endl << endl; 
    
    cout << "Este programa te permitirá conocer tu índice de masa corporal (IMC)" << endl << endl; 
    cout << "Cuál es tu nombre?:" << endl; 
    cin >> nombre; //Se lee y almacena el nombre
    cout << "Mucho gusto " << nombre << ", por favor, dime tu peso en kilogramos: " << endl; 
    cin >> peso; //Se lee y almacena el peso
    cout << "Muy bien, ahora por favor, dime tu estatura en metros: " << endl; 
    cin >> estatura; //Se lee y almacena la estatura
    
    //cálculo del IMC
    imc = peso / (estatura*estatura);
    
    cout << "Muy bien " << nombre << ", Te informo que tu Índice de Masa Corporal es: " << imc << endl; 
    cout << "Lo cual no es  ni bueno ni malo, sino todo lo contrario." << endl; 
    
    return 0;
}
