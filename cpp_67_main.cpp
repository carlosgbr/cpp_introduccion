// main2.cpp
// Uso de parámetros en main
// 2019, Por http://about.me/carlosgbr
// Adaptado de Default int main arguments in C/C++ en 
// https://stackoverflow.com/questions/17045493/default-int-main-arguments-in-c-c
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
int main( int argc, const char* argv[] )
{
	// Imprime cada argumento de la línea de comandos.
	for( int i = 0; i < argc; i++ )
	{
		std::cout << "Argumento "<< i << " = " << argv[i] << std::endl;
	}
}
