/******************************************************************************
// operadoreslogicos2.cpp
// Este programa muestra la evauación de 2 números con operadores lógicos
// AND Y OR
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    bool resp1 = true;
    bool resp2 = false;
    
    cout << "En este programa muestra las tablas de verdad para los operadores\n";
    cout << "AND (&) y OR ( ):\n\n";
    cout << "\n";
    cout << "Tabla de verdad para Y Lógico (AND, &)  \n";
    
    cout << "\tExpresión 1 \t& \tExpresión 2 \t -> \tResultado\n";
    cout << " \t" << true << " \t\t& "  << " \t" << true  << " \t\t= "  << " \t" << (true & true) << "\n";
    cout << " \t" << true << " \t\t& "  << " \t" << false  << " \t\t= "  << " \t" << (true & false) << "\n";
    cout << " \t" << false << " \t\t& "  << " \t" << true  << " \t\t= "  << " \t" << (false & true) << "\n";
    cout << " \t" << false << " \t\t& "  << " \t" << false  << " \t\t= "  << " \t" << (false & false) << "\n";
    //cout << "not (" << numero1 << " != " << numero2 << ") = " << not (numero1 != numero2) << "\n";
        cout << "\n";
    cout << "Tabla de verdad para O Lógico (OR, ||)  \n";
    
    cout << "\tExpresión 1 \t|| \tExpresión 2 \t -> \tResultado\n";
    cout << " \t" << true << " \t\t|| "  << " \t" << true  << " \t\t= "  << " \t" << (true || true) << "\n";
    cout << " \t" << true << " \t\t|| "  << " \t" << false  << " \t\t= "  << " \t" << (true || false) << "\n";
    cout << " \t" << false << " \t\t|| "  << " \t" << true  << " \t\t= "  << " \t" << (false || true) << "\n";
    cout << " \t" << false << " \t\t|| "  << " \t" << false  << " \t\t= "  << " \t" << (false || false) << "\n";

    //Ahora evaluamos expresiones introducidas por el usuario
    
    int numero1 = 0, numero2=0;
    char letra1, letra2;
    
    
    cout << "Introduce la información para que puedas compararla:\n";
    cout << "Escribe un número (sin decimales), a continuación pulsa ENTER\n";
    cin >> numero1;
    cout << "Escribe otro número (con o sin decimales), a continuación pulsa ENTER \n";
    cin >> numero2;
    cout << "Escribe una letra, a continuación pulsa ENTER\n";
    cin >> letra1;
    cout << "Escribe otra letra, a continuación pulsa ENTER \n";
    cin >> letra2;
    cout << "\n";
    cout << "Considera que 0 = Falso y 1 = Verdadero \n";
    
    //Imprementamos una expresión AND
    cout << numero1 << " < "  << numero2  << " = "  << (numero1 < numero2) << "\n";
    cout << letra1 << " < "  << letra2  << " = "  << (letra1 < letra2) << "\n";
    
    cout << "(" << letra1 << " < " << letra2 << ") & (" <<
          numero1 << " < " << numero2 << ") = " << ((letra1 < letra2) & (numero1 < numero2)) << "\n";

    //Imprementamos una expresión OR
    cout << numero1 << " < "  << numero2  << " = "  << (numero1 < numero2) << "\n";
    cout << letra1 << " < "  << letra2  << " = "  << (letra1 < letra2) << "\n";
    
    cout << "(" << letra1 << " < " << letra2 << ") || (" <<
          numero1 << " < " << numero2 << ") = " << ((letra1 < letra2) || (numero1 < numero2)) << "\n";
    
    return 0;
}
