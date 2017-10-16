//operador_relacional_logico.cpp
//El resultado de una axpresión siempre generará un resultado, podemos
//utilizarlo directamente en una expresión válida o almacenarlo en una
//variable para su uso posterior.
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.tutorialspoint.com/compile_cpp_online.php

#include <iostream>
using namespace std;
int main()
{
   int a = 5;
   int b = 8;
   bool r;
   
   //Evaluación directa de identificadores:
   //Nota: Cuando evalúas la expresión directamente en una expresión
   //debes encerarla entre parétesis para que no aparezcan errores.
   cout << "Comparación \"menor que\" 5 < 8 = " << (5 < 8) << endl;
   cout << "Comparación \"mayor que\" 5 > 8 = " << (5 > 8) << endl;
   cout << "Comparación \"menor o igual que\" 5 <= 8 = " << (5 <= 8) << endl;
   cout << "Comparación \"mayor o igual que\" 5 >= 8 = " << (5 >= 8) << endl;
   cout << "Comparación \"diferente que\" 5 != 8 = " << (5 != 8) << endl;
   cout << "Comparación \"igual que\" 5 == 8 = " << (5 == 8) << endl;

   //Es preferible evaluar las expresiones fuera de las cadenas
   cout << "\n\nPara la siguiente sección tenemos a = " << a << " y b = "  << b << endl;
   r = a < b;
   cout << "Comparación \"menor que\" a < b = " << r << endl;
   
   r = a > b;
   cout << "Comparación \"mayor que\" a > b = " << r << endl;
   
   //Evaluación de expresiones lógicas
   cout << "\n\n";  //2 saltos de línea
   
   cout << "\n\nPara la siguiente sección tenemos a = " << a << " y b = "  << b << endl;
   r = (a > b) and (a < b);
   cout << "(a > b) \"and\" (a > b) = " << r << endl;
   
   r = (a > b) or (a < b);
   cout << "(a > b) \"or\" (a > b) = " << r << endl;
   
   r = not (a > b);
   cout << "\"not\" (a > b) = " << r << endl;

   //¡¡NOTA LA DIFERENCIA CON LA SENTENCIA ANTERIOR!!
   r = not a > b;
   cout << "\"not\" a > b = " << r << endl;
   return 0;
}
