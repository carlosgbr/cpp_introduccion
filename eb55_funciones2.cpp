// eb55_funciones2.cpp
// Este programa forma parte del tutorial de introducciC3n al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra la declaraciC3n el uso de funciones y estructuras de control
// El programa tiene un "error" intencional, las fórmulas de Conversión
// de grados centígrados a Kelvin y de Kelvin a grados centígrados están 
// invertidas, esto para ilustrar en la lección una de las ventajas de las 
// funciones: Se modifica el código únicamente en la sección que tiene el error
// sin tener que tocar el código en el programa principal.
// 2018, Por http://about.me/carlosgbr
// VersiC3n 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

float
cnvFaC (float gradosFahrenheit)
//ConversiC3n de grados Fahrenheit a grados CentC-grados
//Fuente de equivalencias https://www.metric-conversions.org/es/temperatura/
{

  return ((gradosFahrenheit - 32)) / 1.8000;

}


float
cnvCaF (float gradosCentigrados)
//ConversiC3n de grados CentC-grados a grados Fahrenheit
//Fuente de equivalencias https://www.metric-conversions.org/es/temperatura/
{

  return ((gradosCentigrados * 1.8)) + 32;

}


float
cnvKaC (float gradosKelvin)
//ConversiC3n de grados Kelvin a grados CentC-grados
{

  return (gradosKelvin + 273.15);

}


float
cnvCaK (float gradosCentigrados)
//ConversiC3n de grados CentC-grados a grados Kelvin
{

  return (gradosCentigrados - 273.15);

}


float
cnvKaF (float gradosKelvin)
//ConversiC3n de grados Kelvin a grados Fahrenheit
{

  return ((gradosKelvin - 273.15) * 1.8000) + 32;

}


float
cnvFaK (float gradosFahrenheit)
//ConversiC3n de grados (float gradosKelvin a grados Kelvin
{

  return ((gradosFahrenheit - 32) / 1.8000) + 273.15;

}

int
main ()
{
  bool continuar = true;
  bool respValida = true;
  int conversion = 0;
  float tempUsr = 0;
  char respUsuario;

  cout << "Bienvenid@ al sistema de Conversión de temperaturas" << endl;


  // Nuestro programa se repetirá hasta el que el usuario seleccione la Opción
  // 7 o indique N cuando se le pregunte
  do
    {

      cout << "Escribe el número de la Conversión que deseas realizar" <<
	endl << endl;

      cout << "(1) Conversión de grados Centigrados a Fahernheit" << endl;
      cout << "(2) Conversión de grados Centigrados a Kelvin" << endl;
      cout << "(3) Conversión de grados Fahernheit a Centigrados" << endl;
      cout << "(4) Conversión de grados Fahernheit a Kelvin" << endl;
      cout << "(5) Conversión de grados Kelvin a Centigrados" << endl;
      cout << "(6) Conversión de grados Kelvin a Fahernheit" << endl;
      cout << "(7) Salir del programa" << endl;

      cin >> conversion;

      switch (conversion) {

	case 1:
	{
        cout <<
	    "*** Conversión de grados centígrados a Grados Fahrenheit**" << endl << endl;
        cout << "Escribe la temperatura en grados centigrados" << endl;
        cin >> tempUsr;
        cout << "**********************************************" << endl;
        cout << tempUsr << "°C equivalen a " << cnvCaF (tempUsr) << "°F" << endl;
        cout << "**********************************************" << endl;

        cout << endl << endl;

	  // Preguntamos al usuario si desea realizar otro cálculo, el programa
	  // solo permite S, s, N, n; como respuesta
	  do {
	  cout << "Deseas realizar otra Conversión? Escribe S/N" << endl;
	  cin >> respUsuario;

	  respValida = false;

	  if (respUsuario == 'S' or respUsuario == 's') {
	    cout << "Selecciona la conversión a realizar"  << endl;
	    continuar = true;
	    respValida = true;
	  } else if (respUsuario == 'N' or respUsuario == 'n') {
        cout << "Gracias por utilizar el programa"  << endl;
	    continuar = false;
	    respValida = true;
	  } else {
        cout << "Opción no válida, indica S para continuar, N para terminar"  << endl;
	    respValida = false;
	  }

	  } while (respValida == false);   //do

	  break;
	}

		case 2:
	{
        cout <<
	    "*** Conversión de grados Centigrados a Kelvin ***" << endl << endl;
        cout << "Escribe la temperatura en grados centigrados" << endl;
        cin >> tempUsr;
        cout << "**********************************************" << endl;
        cout << tempUsr << "°C equivalen a " << cnvCaK (tempUsr) << "K" << endl;
        cout << "**********************************************" << endl;

        cout << endl << endl;
        
        
	  // Preguntamos al usuario si desea realizar otro cálculo, el programa
	  // solo permite S, s, N, n; como respuesta
	  do {
	  cout << "Deseas realizar otra Conversión? Escribe S/N" << endl;
	  cin >> respUsuario;

	  respValida = false;

	  if (respUsuario == 'S' or respUsuario == 's') {
	    cout << "Selecciona la conversión a realizar"  << endl;
	    continuar = true;
	    respValida = true;
	  } else if (respUsuario == 'N' or respUsuario == 'n') {
        cout << "Gracias por utilizar el programa"  << endl;
	    continuar = false;
	    respValida = true;
	  } else {
        cout << "Opción no válida, indica S para continuar, N para terminar"  << endl;
	    respValida = false;
	  }

	  } while (respValida == false);//do

	  break;
	}

		case 3:
	{
        cout <<
	    "*** Conversión de grados Fahernheit a Centigrados ***" << endl << endl;
        cout << "Escribe la temperatura en grados Fahernheit" << endl;
        cin >> tempUsr;
        cout << "**********************************************" << endl;
        cout << tempUsr << "°F equivalen a " << cnvFaC (tempUsr) << "°C" << endl;
        cout << "**********************************************" << endl;

        cout << endl << endl;

	  // Preguntamos al usuario si desea realizar otro cálculo, el programa
	  // solo permite S, s, N, n; como respuesta
	  do {
	  cout << "Deseas realizar otra Conversión? Escribe S/N" << endl;
	  cin >> respUsuario;

	  respValida = false;

	  if (respUsuario == 'S' or respUsuario == 's') {
	    cout << "Selecciona la conversión a realizar"  << endl;
	    continuar = true;
	    respValida = true;
	  } else if (respUsuario == 'N' or respUsuario == 'n') {
        cout << "Gracias por utilizar el programa"  << endl;
	    continuar = false;
	    respValida = true;
	  } else {
        cout << "Opción no válida, indica S para continuar, N para terminar"  << endl;
	    respValida = false;
	  }

	  } while (respValida == false);//do

	  break;
	}

		case 4:
	{
        cout <<
	    "*** Conversión de grados Fahernheit a Kelvin ***" << endl << endl;
        cout << "Escribe la temperatura en grados Fahrenheit" << endl;
        cin >> tempUsr;
        cout << "**********************************************" << endl;
        cout << tempUsr << "°F equivalen a " << cnvFaK (tempUsr) << "K" << endl;
        cout << "**********************************************" << endl;

        cout << endl << endl;

	 
	  // Preguntamos al usuario si desea realizar otro cálculo, el programa
	  // solo permite S, s, N, n; como respuesta
	  do {
	  cout << "Deseas realizar otra Conversión? Escribe S/N" << endl;
	  cin >> respUsuario;

	  respValida = false;

	  if (respUsuario == 'S' or respUsuario == 's') {
	    cout << "Selecciona la conversión a realizar"  << endl;
	    continuar = true;
	    respValida = true;
	  } else if (respUsuario == 'N' or respUsuario == 'n') {
        cout << "Gracias por utilizar el programa"  << endl;
	    continuar = false;
	    respValida = true;
	  } else {
        cout << "Opción no válida, indica S para continuar, N para terminar"  << endl;
	    respValida = false;
	  }

	  } while (respValida == false);//do

	  break;
	}

		case 5:
	{
        cout <<
	    "*** Conversión de grados Kelvin a Centigrados ***" << endl << endl;
        cout << "Escribe la temperatura en grados Kelvin" << endl;
        cin >> tempUsr;
        cout << "**********************************************" << endl;
        cout << tempUsr << "K equivalen a " << cnvKaC (tempUsr) << "°C" << endl;
        cout << "**********************************************" << endl;

        cout << endl << endl;

	  // Preguntamos al usuario si desea realizar otro cálculo, el programa
	  // solo permite S, s, N, n; como respuesta
	  do {
	  cout << "Deseas realizar otra Conversión? Escribe S/N" << endl;
	  cin >> respUsuario;

	  respValida = false;

	  if (respUsuario == 'S' or respUsuario == 's') {
	    cout << "Selecciona la conversión a realizar"  << endl;
	    continuar = true;
	    respValida = true;
	  } else if (respUsuario == 'N' or respUsuario == 'n') {
        cout << "Gracias por utilizar el programa"  << endl;
	    continuar = false;
	    respValida = true;
	  } else {
        cout << "Opción no válida, indica S para continuar, N para terminar"  << endl;
	    respValida = false;
	  }

	  } while (respValida == false);//do

	  break;
	}

		case 6:
	{
        cout <<
	    "*** Conversión de grados Kelvin a Grados Fahrenheit**" << endl << endl;
        cout << "Escribe la temperatura en grados Kelvin" << endl;
        cin >> tempUsr;
        cout << "**********************************************" << endl;
        cout << tempUsr << "K equivalen a " << cnvKaF (tempUsr) << "°F" << endl;
        cout << "**********************************************" << endl;

        cout << endl << endl;

	  // Preguntamos al usuario si desea realizar otro cálculo, el programa
	  // solo permite S, s, N, n; como respuesta
	  do {
	  cout << "Deseas realizar otra Conversión? Escribe S/N" << endl;
	  cin >> respUsuario;

	  respValida = false;

	  if (respUsuario == 'S' or respUsuario == 's') {
	    cout << "Selecciona la conversión a realizar"  << endl;
	    continuar = true;
	    respValida = true;
	  } else if (respUsuario == 'N' or respUsuario == 'n') {
        cout << "Gracias por utilizar el programa"  << endl;
	    continuar = false;
	    respValida = true;
	  } else {
        cout << "Opción no válida, indica S para continuar, N para terminar"  << endl;
	    respValida = false;
	  }

	  } while (respValida == false);//do

	  break;
	}

    case 7:
    {
	  cout << "(C) Tu empresa de Desarrollo de Software" << endl;
	  continuar = false;
	  break;
      }

} //witch

    }
  while (continuar);

  return 0;
}
