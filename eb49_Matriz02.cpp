// eb48_Matriz02.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra el uso de Arreglos Bidimensionales o Matrices
// Se implementa una versión simplificada del juego clásico "Batalla naval" 
// https://es.wikipedia.org/wiki/Batalla_naval_(juego)
// a partir de la cual se puede extender para mejorar sus prestaciones.
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{

    // Definimos nuestro tablero de 10 x 10 casillas

    const int alto =10;
    const int ancho = 10; 
    const int oportunidades = 3;
    const char vacio = 'O';
    const char barco = 'B';
    const char hundido = '*';

   
    char Tablero[alto][ancho];
    //char vacio , barco;
    int colBarco, filBarco; 
    
    
    //Inicializamos el arreglo con posiciones vacías
    
    for (int i = 0; i < alto; i++) {
        for (int j = 0; j < ancho; j++) {
            Tablero[i][j] = vacio; // Llenamos de posiciones vacías el Tablero
        }
    }
    
    // El usuario 1 puede colocar 3 barcos en el Tablero
    
    cout << "Usuario defensor, escribe la posición de tus 3 barcos en el tablero" << endl;
    cout << "recuerda que el tablero mide: " << alto << " X " << ancho << " posiciones" << endl << endl; 
    
    for (int i = 1; i <= 3; i++){
        cout << "Escribe la posición del barco " << i << endl;
        cout << "Coordenada X: ";
        cin >> colBarco;
        cout << "Coordenada Y: ";
        cin >> filBarco;
        
        // Nota que restamos 1 a cada valor, revisa el texto.
        Tablero[colBarco-1][filBarco-1] = barco;
    }
    
    cout << "La posición de tus barcos es" << endl;
    for (int i = 0; i < alto; i++){
        cout << endl;
        for (int j = 0; j < ancho; j++) {
            cout << Tablero[i][j] << " ";
        }
    }
    
    cout << endl << endl << "Listo ya posicionaste tus barcos, ahora daremos en control al atacante" << endl;

    // Aquí deberíamos borrar la pantalla, pero aún no revisamos este tipo de función.
    // Así que no le damos importancia en este momento.
    
    // Supongamos que el atacante no ve el tablero anterior. Es un buen muchacho :D
    
    cout << endl << "Sr atacante es su oportunidad de hundir los barcos." << endl;
    cout << "Cuentas con " << oportunidades << " para hundir los barcos" << endl;
    cout << "recuerda que el tablero mide: " << alto << " X " << ancho << " posiciones" << endl << endl; 
    
    int i = 0;
    do
    {
        cout << "Escribe la posición del barco "  << endl;
        cout << "Coordenada X: ";
        cin >> colBarco;
        colBarco -= 1;  // Nota que restamos 1 a cada valor, revisa el texto.
        cout << "Coordenada Y: ";
        cin >> filBarco;
        filBarco -= 1;  // Nota que restamos 1 a cada valor, revisa el texto.
        
        //cout << colBarco << ", " << filBarco << endl;
        cout << Tablero[colBarco][filBarco] << endl;
        
        if (Tablero[colBarco][filBarco] == barco) {
            cout  << endl<< "¡¡¡Le diste, barco hundido!!!" << endl << endl << endl;
            Tablero[colBarco][filBarco] = hundido;
        } else {
            cout  << endl<< "Más suerte para la próxima" << endl<< endl<< endl;
        }
        
        i++;
        
    } while (i < oportunidades);
    
    cout << "El tablero después de la batalla: " << endl;
    for (int i = 0; i < alto; i++){
        cout << endl;
        for (int j = 0; j < ancho; j++) {
            cout << Tablero[i][j] << " ";
        }
    }
        
    cout << endl<< endl<< "B - Barcos intactos" << endl;
    cout << "* - Barcos hundidos"<< endl<< endl<< endl;
    
    cout << "Gracias por jugar y recuerda ampliar este programa!";
    
    return 0;
}
