// cpp_71_sobrecargaTriangulo.cpp
// Se ilustra la sobrecarga de funciones para el cálculo del área de un triángulo
// 2019, Por http://about.me/carlosgbr
// Versión 1
// Revisa todo el código del tutoral en: https://github.com/carlosgbr/
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
#include <cmath>
using namespace std; 

double trianguloarea(double);
double trianguloarea(double, double);
double trianguloarea(double, double, double);

int main()
{

    // El número de parámetros que pasamos determinar el tipo de triángulo que
    // calculamos, 1 parámetro = Equilátero, 2 parámetros = isóceles
    // 3 parámetros = escaleno.
    
    double a = 2;
    double b = 4;
    double c = 5;

    cout << "Triángulo. Lado = " << a << " :" << trianguloarea(a) << endl;
    cout << "Triángulo. Lado = " << a << ", Base = : " << b << " :" << trianguloarea(a, b) << endl;
    cout << "Triángulo. Lado 1 = " << a << ", Lado 2 = " << b << ", Lado 3 = " 
    << c << " :" << trianguloarea(a, b, c) << endl;
    return 0;
}

double trianguloarea(double a)
//  area = ( (sqrt(3)/4) * (a * a) )
{
    cout << "Calculando área de triángulo equilátero: " << endl;
    return ( (sqrt(3)/4) * (a * a) );
}

double trianguloarea(double a, double b)
{
    cout << "Calculando área de triángulo isóceles: " << endl;
    return (b * (sqrt ((a * a) - ( (b * b) / 4 ) ) ) ) / 2;
}

double trianguloarea(double a, double b, double c)
{
    double p;
    
    p = ( (a + b + c) / 2 ); 
    cout << "Calculando área de triángulo escaleno: " << endl;
    return sqrt( (p* (p - a) * (p - b) * (p - c)) );
}
