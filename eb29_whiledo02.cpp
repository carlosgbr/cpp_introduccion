// eb29_whiledo02.cpp
// Uso de while do 2
// Se ilustra un uso del ciclo while - do Mostramos los códigos ASCII aprovechando
// la posibilidad de realizar conversiones implícitas de tipos
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    
    cout<<"Tabla de códigos ASCII  utilizando do While" << endl  << endl;
    
    cout << "Código \t Caracter" << endl;
    do {
        
        // char(a) convierte el valor numérico de "a" a su correspondencia ASCII
        cout << a << " \t - " << char(a) << endl;
        
        a = a + 1;  //incrementamos nuestro contador
    
        
    } while (a<=255);

    return 0;
}
