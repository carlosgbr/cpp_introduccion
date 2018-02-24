// eb41_switch03.cpp
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra la repetición de la estructura switch hasta que el usuario 
// teclea un valor predeterminado, así como la comprobación de errores
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main()
{
    int a, b, total;
    int seleccion;
    bool terminar = false;
    
    cout<<"Bienvenid@, este programa realizará operaciones aritméticas" << endl;
    cout<<"sobre 2 cantidades que escribas" << endl << endl;
    
    do  //garantizamos que al menos se ejecute una vez nuestro código
    {
        cout<<endl<<"Indica el número de la operación que desees realizar " <<endl;
        cout<<"Escribe 0 para terminar" << endl;
        cout<<"(1) Suma" << endl;
        cout<<"(2) Resta" << endl;
        cout<<"(3) Producto" << endl;
        cout<<"(4) División Entera" << endl;
        cout<<"(5) Módulo" << endl;
        cout<<"(0) Salir" << endl;
        cin>>seleccion;
        

        //Para realizar la operación solicitada utilizamos una estructura switch
        //Switch impide que se ejecuten todas las sentencias case;
        switch (seleccion) {
            case 1: 
                cout<<"Escribe el primer número: ";
                cin>>a;
                cout <<"Escribe el segundo número: ";
                cin>>b;
                cout << "La suma es: " << a + b << endl;
                break;
            
            case 2: {
                cout<<"Escribe el primer número: ";
                cin>>a;
                cout <<"Escribe el segundo número: ";
                cin>>b;
                cout << "La resta es: " << a - b << endl;
                break;
            }
            case 3: {
                cout<<"Escribe el primer número: ";
                cin>>a;
                cout <<"Escribe el segundo número: ";
                cin>>b;
                cout << "El producto es: " << a * b << endl;
                break;
            }
            case 4: {
                bool valido = false;
                cout<<"Escribe el primer número: ";
                cin>>a;
                //Introducimos la comprobación de errores
                //Evitamos errores por división entre 0
                do 
                {
                    cout <<"Escribe el segundo número: ";
                    cin>>b;
                    if (b == 0)
                    {
                        cout << "No puedes dividor entre 0, elige otro número" << endl;
                        valido = false;
                    }
                    else {
                        valido = true;
                    } //if
                } //while
                while (not valido);
                cout << "La división es: " << a / b << endl;
            }
            case 5: {
                cout<<"Escribe el primer número: ";
                cin>>a;
                cout <<"Escribe el segundo número: ";
                cin>>b;
                cout << "El módulo es: " << a % b << endl;
                break;
            }
            case 0: {
                terminar = true;
                break;
            }
            default: {
                cout << "Opción no válida, vuelve a intentarlo" << endl;
                break;
            }
        } //Fin de switch
    } //fin de do
    while (not terminar); //Repite el ciclo hasta presionar 0
    
    cout<<"Gracias por utilizar este programa" << endl;

    return 0;
}
