// cpp_85_ConstanteGlobal1.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra el el uso de constantes globales en C++
// 2019, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler


#include <iostream>
using namespace std;

//Definimos una variable global
const float pi = 3.141516;

float circulo_perimetro(float );
float circulo_area(float );

int main()

{
    
    double radio;
    
    cout << "Dame el valor del Radio:" << "\n";
    cin >> radio;

    cout << "El valor de Pi es: " << pi << "\n";
    cout << "El diámetro del cículo es: " << circulo_perimetro(radio) << "\n";
    cout << "El área del cículo es: " << circulo_area(radio) << "\n\n";
    
    return 0;
}

//Para calcular el perímetro del círculo se utiliza la fórmula
//P = 2r * pi
float circulo_perimetro(float radio)
{
    //Descomenta esta sentencia para que veas el valor de pi que se utiliza
    //cout << "El valor de Pi es: " << pi << "\n";
    return (2*radio) * pi;
    
}

//Para calcular el área del círculo se utiliza la fórmula
//A = pi * r^2
float circulo_area(float radio)
{
    
    //Descomenta esta sentencia para que veas el valor de pi que se utiliza 
    //cout << "El valor de Pi es: " << pi << "\n";   
    return (radio*radio) * pi;
     
}
