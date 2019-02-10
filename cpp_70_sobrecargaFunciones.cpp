// cpp_70_sobrecargaFunciones.cpp
// Se ilustra la sobrecarga de funciones
// 2019, Por http://about.me/carlosgbr
// VersiC3n 1
// Revisa todo el cC3digo del tutoral en: https://github.com/carlosgbr/
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
using namespace std; 

void imprime(int a){
   cout << "Entero" << endl;
}
void imprime(float a){
   cout << "Flotante" << endl;
}
void imprime(double a){
   cout << "Doble" << endl;
}
int main() {
    imprime(42);
    imprime(42.0f);
    imprime(42.1);
    return 0;
}
