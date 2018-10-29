// eb61_libreria.h
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se definen funciones de diversas conversiones con el fin de ejemplificar leguaje-c-introduccion
// definición y uso de bibliotecas.
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
using namespace std;

// Prototipos de función 

// decimalABinario - Convierte la entrada a un número con formato Binario
// entrada: numeroDecimal, debe ser un númro entero
// salida: Devuelve un valor long, con el número equivalente en formato binario
long decimalABinario(long numeroDecimal);

// decimalAHexadecimal - Convierte la entrada a un número con formato Hexadecimal
// entrada: numeroDecimal, debe ser un númro entero
// salida: Devuelve un valor string, con la cadena equivalente en formato Hexadecimal
string decimalAHexadecimal(long numeroDecimal);

// decimalAOctal - Convierte la entrada a un número con formato Octal
// entrada: numeroDecimal, debe ser un númro entero
// salida: Devuelve un valor int, con el número equivalente en formato Octal
long decimalAOctal(long numeroDecimal);

// conversionNumerica - Esta función nos permite un vistazo rápido al uso de las 
// funciones contenidas en esta biblioteca.
int conversionNumerica();


// Función de Prueba
int conversionNumerica()
{
    int numero = 0;

    cout << "Introduce un numero entero: ";
    cin >> numero;
    if (numero < 0){
        return 0;
    } else {
        cout << "Binario: " <<  decimalABinario(numero) << endl;
        cout << "Hexadecimal: " <<  decimalAHexadecimal(numero) << endl;        
        cout << "Octal: " <<  decimalAOctal(numero) << endl;
    }
    
    return 0;
}


// remainder -- Devuelve el remanente de punto flotante de numerador/denominador 
// (redondeado al más cercano):
// remainder = numer - rquot * denom 
// Adaptado de https://stackoverflow.com/questions/25158255/decimal-to-binary-conversion-c
// En donde, rquot es el resultado de: numerador/denominador, redondeado hacia
// el valor integral más cercano (con casos a a punto medio redondeados hacia el
// número par).
long decimalABinario(long numeroDecimal)
{
    long remainder;
    long i=1;
    long total=0;
    
    while(numeroDecimal!=0)
    {
        remainder = numeroDecimal%2;
        numeroDecimal /= 2;
        total += remainder*i;
        i *= 10;
    }
    return total;
}

// Adaptado de https://stackoverflow.com/questions/29759404/decimal-to-hexadecimal-conversion-code-in-c
string decimalAHexadecimal(long numeroDecimal)
{
    string s = "";
    long rem;
    
    while (numeroDecimal > 0)   // Haz esto mientras el cociente sea mayor que 0.
    {
      rem = numeroDecimal % 16; // Obtener el resto.
      if (rem > 9)
      {
        // Mapea el carácter dado que el resto es mayor que 9.
        switch (rem)
        {
          case 10: s = "A" + s; break;
          case 11: s = "B" + s; break;
          case 12: s = "C" + s; break;
          case 13: s = "D" + s; break;
          case 14: s = "E" + s; break;
          case 15: s = "F" + s; break;
        }
      }
      else
      {
        s = char(rem + 48) + s; // Convierte enteros (0-9) a código ASCII.
                     // x + 48 es el código ASCII para x dígito (si 0 <= x <= 9)
      }
      numeroDecimal = numeroDecimal/16;
     }
     
     if (s == "") // si el número fuera 0, la cadena permanecerá vacía
       return "0";
     else
       return s;
}   

// Adaptado de https://www.programiz.com/cpp-programming/examples/octal-decimal-convert
long decimalAOctal(long numeroDecimal)
{
    long rem, 
    i = 1, 
    numeroOctal = 0;
    
    while (numeroDecimal != 0)
    {
        rem = numeroDecimal % 8;
        numeroDecimal /= 8;
        numeroOctal += rem * i;
        i *= 10;
    }
    return numeroOctal;
}
