// cin2.cpp
// Este programa muestra el uso del stream de entrada cin(), muestra el uso
// de cin() encadenado
// Calculamos el área y perímetro de un cuadrilátero regular
// 2017, Por http://about.me/carlosgbr
// VersiC3n 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int
main ()
{
  float lado1, lado2, area, perimetro;

  cout <<
    "Después de escribir el dato que se te pide, pulsa la tecla ENTER ó ACEPTAR"
    << endl << endl;

  cout <<
    "Este programa calcula el área y perímetro de un rectángulo" <<
    endl << endl;
  cout << 
    "Indica el lado1 y el lado2 separados por un espacio, depués pulsa ENTER:" << 
    endl;
  cin >> lado1 >> lado2;		//Lee los lado de forma encadenada
  //Corroboramos que tenemos los 2 lados almacenados
  cout << "El lado1 mide: " << lado1 << ", El lado2 mide: " << lado2 << endl;
  
  //Calculamos el perímetro p = l+l+l+L
  perimetro = (lado1 * 2) + (lado2 * 2);
  //Calculamos el área
  area = lado1 * lado2;
  
  cout << "El cuadrilátero tiene dimensiones de: " << lado1 << " x " << 
    lado2 << " unidades" << endl << endl;

  cout << "El perímetro es de: " << perimetro << " unidades. " << 
    "Y el área es de: " << area << " unidades cuadradas" << endl;

  return 0;
}
