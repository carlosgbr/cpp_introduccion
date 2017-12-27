// eb27_while03.cpp
// Uso de while03
// Variación del programa de cálculo de índice de masa corporal, utilizando
// while se habilita la opción de ejecuciones múltiples hasta que el usuario 
// pulsa la tecla 'n' o 'N'
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    const float BajoPeso = 18.5; //Hasta 18.5
    const float SobrePeso = 25.00; //A partir de 25.00
    const float Obesidad = 30.00; //A partir de 30.00
    const float ObesidadMorbida = 40.00; //A partir de 40.00

    string nombre, estatusIMC;
    float peso, estatura, imc;
    char respuesta;    
    bool continuar = true;
    
    while (continuar)
    {
        cout << "Después de escribir el dato que se te pide, pulsa la tecla ENTER ó ACEPTAR" << endl << endl;

        cout << "Este programa te permitirá conocer tu índice de masa corporal (IMC)" << endl << endl;
        cout << "Cuál es tu nombre?:" << endl;
        cin >> nombre; //Se lee y almacena el nombre
        cout << "Mucho gusto " << nombre << ", por favor, dime tu peso en kilogramos: " << endl;
        cin >> peso; //Se lee y almacena el peso
        cout << "Muy bien, ahora por favor, dime tu estatura en metros: " << endl;
        cin >> estatura; //Se lee y almacena la estatura


        //cálculo del IMC
        imc = peso / (estatura*estatura);

        //Determinamos el grado de obesidad dependiendo del IMC

        //bajo peso menor a 18.5
        if (imc <= BajoPeso) {
            estatusIMC = "Bajo peso";
        }

        //Peso normal superior 18.5 menor a 25.0
        if ((imc > BajoPeso) and (imc <= SobrePeso)) {

            estatusIMC = "Peso normal";
        }

        //SobrePeso arriba de 25.0
        if ((imc > SobrePeso) and (imc < Obesidad)) {
            estatusIMC = "Obesidad";
        }

        //Obesidad arriba de 30.0 menor a 40.0
        if ((imc >= Obesidad) and (imc <= ObesidadMorbida)) {
            estatusIMC = "Obesidad";
        }
        //Obesidad Mórbida arriba 40.0
        if (imc > ObesidadMorbida) {
            estatusIMC = "Obesidad Mórbida";
        }

        cout << "Muy bien " << nombre << ", Te informo que tu Índice de Masa Corporal es: "
             << imc << endl;
        cout << "De acuerdo a la OMS, tu IMC está dentro del rango: "
             << estatusIMC << endl;
             
        cout << "¿Deseas realizar otro cálculo? Escribe cualquier letra para sí o N para terminar" << endl;
        cin >> respuesta;
        
        //Si el usuario pulsa 'n' o 'N' establecemos condición de paro
        if (respuesta == 'n' or respuesta == 'N') //Evaluamos la respuesta del usuario
        {
            continuar = false;  //Establecemos condición para terminar.
        }
                
    }

    return 0;
}
