// cpp_45_enum03.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra la simplificación que ofrece el uso de enum en los programas
// y la simplificación y claridad que podemos hacer en nuestros programas.
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler


#include <iostream>

using namespace std;

int main()
{
    enum TipoSwitch {Encendido = 1, Apagado = 0};
    
    TipoSwitch Switch1, Switch2, Led;
    
    //Obtenemos el estado del Switch1 "de algún modo"
    Switch1 = Encendido;
    Switch2 = Apagado;
    
    //Estado del led
    if (Switch1 and Switch2) {
        Led = Encendido;
    } else {
        Led = Apagado;
    }
    
    cout << "Estado del led: " << Led;
    
return 0;
}
