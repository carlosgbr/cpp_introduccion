// cpp_51_Matriz3D.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra el uso de Arreglos Tridimensionales
// Este programa se adaptó del programa localizado en el sitio
// https://www.programiz.com/cpp-programming/multidimensional-arrays
// Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
 {
    // Este arreglo puede almacenar hasta 12 elementos (2x3x2)
    int test[2][3][2];

    cout << "Introduce 12 elementos: \n";
 
     // Insertamos los valres en el arreglo test
     // utilizando 3 bucles anidados;
     for(int i = 0; i < 2; ++i)
     {
         for (int j = 0; j < 3; ++j)
         {
             for(int k = 0; k < 2; ++k )
             {
             cin >> test[i][j][k];
             }
         }
     }
    
    cout<<"\nMostrando los valores:"<<endl;
    // Mostrando los valores con el índice apropiado.
     for(int i = 0; i < 2; ++i)
     {
         for (int j = 0; j < 3; ++j)
         {
             for(int k = 0; k < 2; ++k)
             {
                cout << "test[" << i << "][" << j << "][" << k << "] = " << test[i][j][k] << endl;
             }
         }
     }
     return 0;
     }
