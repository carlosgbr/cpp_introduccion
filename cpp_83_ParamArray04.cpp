// eb83_ParamArray04.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra el paso de Arrays Multidimensionales como parámetros 
// en funciones en C++
// 2019, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
using namespace std;

void ImprimeMatriz(int *matriz, int fila, int col)
{
    for (int i=0;i<fila;i++)
    {
        for (int j=0;j<col;j++)
        {
            cout<<matriz[i*col+j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int matriz[4][5] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int m1[5][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};
    ImprimeMatriz((int *)matriz, 4, 5);
    ImprimeMatriz((int *)m1,5,3);

    return 0;
}
