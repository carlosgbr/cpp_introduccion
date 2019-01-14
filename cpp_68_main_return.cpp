// cpp_68_main_return.cpp
// Uso de parámetros en main como forma de recepción de datos
// para ilustrar diversas condiciones de salida de return
// El programa calcula el índice de masa corporal 
// 2019, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
#include <sstream> 
using namespace std;

// Este programa requiere obligatoriamente 3 argumentos de entrada
// modo de llamada: nombreprograma nombre estatura peso
// nombreprograma - el nombre del programa sin espacios varía como lo llames, dejar espacio
// nombre - tu nombre, dejar espacio
// peso - en kilogramos, dejar espacio
// estatura - en metros
// ejemplo: imc paulina 51 164


int main(int argc, const char* argv[])
{
	// Verificamos que tenga los 3 parámetros obligatorios
	if (argc != 4)
	{ 
	    std::cout << "Número de parámetros incorrecto.";
	    return EXIT_FAILURE;    // Terminamos el programa
	}
	else {
	    // Recuperamos los parámetros de la línea de comandos
	    string nombre = argv[1];    // El primero es el nombre del usuario
	   
	   // Convertimos el peso en número
        string speso = argv[2];     // Toma el segundo argumento y lo almacena
        istringstream stream1(speso);
        float peso;
        stream1 >> peso;            // hacemos la conversión a float
        
        // convertimos estatura a float
        string sestatura = argv[3];
        istringstream stream2(sestatura);
        float estatura;
        stream2 >> estatura;
        
        // Calculamos nuestro índice de masa corporal, estatura en metros
        // peso en kilogramos.
        float imc = peso / (estatura*estatura);
        
        
        // Definimos nuestroc xódigos de retorno de a cuerdo a nuestra 
        // conveniencia, recuerda nosotros somos los responsables 
        // Una vez depurado puedes comentar las salidas cout
        if (imc > 16) {
            cout << nombre << " tu imc es: " << imc;
            return EXIT_SUCCESS;   // Fin de programa, correcto
        } else if ((imc <= 16) and (imc > 10)) {
            cout << nombre << " tu imc es: " << imc;
            return 10;   // nosotros definimos que significa 1, por 
                        // ejemplo "revisar valores"            
        } else if ((imc <= 10) and (imc > 0)) {
            cout << nombre << " tu imc es: " << imc;
            return 20;   // Revisar sino están invertidos los argumentos
        } else {
            cout << nombre << " tu imc es: " << imc;
            return 30;   // Error desconocido
        }
        
	}    
            
    cout << "Hola Mundo";   //Esta línea no debería ejecutarse dado que el 
                            // programa termina en return.

}
