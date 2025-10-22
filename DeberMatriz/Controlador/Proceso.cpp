#include "Proceso.h"
#include <iostream>
using namespace std;

void Proceso::operar(){
     Datos *m1 = new Datos(3, 3);
    Datos *m2 = new Datos(3, 3);
    Datos *resultado = new Datos(3, 3);
    m1 ->segmentar();
    m2 ->segmentar();
    resultado ->segmentar();

    m1 ->encerrar();
    m2 ->encerrar();
    cout<<"Ingrese los datos de la primera matriz"<<endl;
    m1 ->ingresarDatos();
    cout<<"Ingrese lso datos de la segunda matriz"<<endl;
    m2->ingresarDatos();

    Datos::multiplicarMatrices(m1,m2,resultado);
    cout<<"El resultado de la matriz es:"<<endl;
    resultado->imprimirMatriz();
    m1->liberarMemoria();
    m2->liberarMemoria();
    resultado->liberarMemoria();
    delete m1;
    delete m2;
    delete resultado;
}