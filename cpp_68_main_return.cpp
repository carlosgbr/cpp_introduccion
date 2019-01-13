// main_return.cpp
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
// ejemplo: imc paulina 51 1.64


int main( int argc, const char* argv[] )
{
	// Verificamos que tenga los 3 parámetros obligatorios
	if (argc != 4)
	{ 
	    std::cout << "Número de parámetros incorrecto.";
	    return EXIT_FAILURE;
	}
	else {
	    // Recuperamos los parámetros
	    string nombre = argv[1];
	   
	    istringstream strpeso;
        //string strpeso = argv[2];
        strpeso.str(argv[2]);
        int peso = 0;
        strpeso >> peso;

	    istringstream strestatura;
        //string strestatura = argv[3];
        strestatura.str(argv[3]);
        int estatura = 0;
        strestatura >> estatura;

	    int imc = peso / (estatura*estatura);
	    
	    cout << nombre << " tu imc es: " << imc;
	}


/*	for(int i = 0; i < argc; i++ )
	{
		std::cout << "Argumento "<< i << " = " << argv[i] << std::endl;
	} */
}
