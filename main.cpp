// LECTURA O ENTRADA DE DATOS / ALAN AVILES

#include <iostream>
#include <stdlib.h>

using namespace std;

//  EJERCICIO:
/*
    GUARDAR UN DATO DE CADA TIPO DE DATO RESTANTE:

- FLOAT
- DOUBLE
- CHAR

*/

int main()
{
    //  DECLARAR VARIABLES A UTILIZAR.
    int numero = 0;

    int numero1 = 0, numero2 = 0;


    //  SOLICITAR NUMERO A GUARDAR.
    cout << endl << "\tLECTURA O ENTRADA DE DATOS." << endl;
    cout << endl <<"Ingresa 2 Numeros: ";


    //  GUARDAR NUMERO INGRESADO.
    ///FORMA 1:
    //cin >> numero;

    ///FORMA 2:
    cin >> numero1>>numero2;

    //  IMPRIMIR NUMERO GUARDADO.
    cout << endl <<"El Numero Ingresado Es: " << numero1<<","<< numero2 << endl;

    return 0;
}
