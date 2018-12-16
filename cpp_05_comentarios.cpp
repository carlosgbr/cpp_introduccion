/* 
  comentarios.cpp
  Este es un programa que ilustra los 2 tipos de comentarios disponibles en C++,
  un comentario de múltipes líneas inicia con una /* y termina con un * / 
  (Sin el espacio) y te permite documentar programas para facilitar su 
  mantenimiento y lectura. Como los comentarios son ignorados y no afectan el 
  tamaño y rendimiento del programa se sugiere su uso de forma amplia.
   
  2017, Por http://about.me/carlosgbr
  Versión 1
  Compilado en https://www.tutorialspoint.com/compile_cpp_online.php
*/

#include <iostream>
int main()
{ 
  //utilizamos la sintaxis std::cout debido a que no definimos "using namespace std" 
  std::cout << "Ilustramos el uso de cout sin el uso del espacio de trabajo std"  << "\n"; 
  std::cout << "recuerda que los cuatro puntos se denominan \"Operador de Resolución de Alcance\"" << "\n"; //observa que utilizamos caracteres de escape para poner el entrecomillado
  
  // stdlib::cout << "Esta es una forma de lograr que una sentencia de código no se ejecute" << endl;

  /* Recuerda: Es preferible un programa que tenga comentarios demás que de menos, 
     como siempre el tiempo te lo hará ver */

  return 1; //Devolvemos 1 no 0 como siempre, porque somos programadores, y porque podemos
}
