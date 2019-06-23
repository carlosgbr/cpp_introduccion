// eb81_ParamArray02.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra el paso de Arrays como parámetros en funciones en C++
// Este programa realiza la suma de enteros utilizando arreglos 
// pasados arreglos funciones
// 2019, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
using namespace std;

void pedirDatos(int suma[], int max);
int totalSuma(int suma[],int max);

int main(){
 int max = 5;
 int suma[max];
 pedirDatos(suma,max);
 cout << "Suma total: " << totalSuma(suma, max) << endl;
 return 0;
}

void pedirDatos(int suma[],int max){
        cout << "Introduce " << max << " números enteros" << endl;
 for(int i = 0; i < max; i++){
  cin >> suma[i];
 }
}

int totalSuma(int Suma[],int max){
 int sumaTotal = 0;
 for(int i = 0; i < max; i++){
  sumaTotal += Suma[i];
 }
 return sumaTotal;
}
