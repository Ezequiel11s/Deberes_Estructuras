#include "Proceso.h"
#include <iostream>
using namespace std;
void Proceso::operar() {
    // Creamos matrices 3D de tamaño 3x3x3 (filas, columnas, profundidad)
    Datos* m1 = new Datos(3, 3, 3);
    Datos* m2 = new Datos(3, 3, 3);
    Datos* resultado = new Datos(3, 3, 3);

    m1->segmentar();
    m2->segmentar();
    resultado->segmentar();

    m1->encerrar();
    m2->encerrar();
    resultado->encerrar();

    cout << "Ingrese los datos de la primera matriz tridimensional:" << endl;
    m1->ingresarDatos();
    cout << "Ingrese los datos de la segunda matriz tridimensional:" << endl;
    m2->ingresarDatos();

    Datos::sumarMatrices(m1, m2, resultado);

    cout << "El resultado de la suma de las matrices es:" << endl;
    resultado->imprimirMatriz();

    m1->liberarMemoria();
    m2->liberarMemoria();
    resultado->liberarMemoria();

    delete m1;
    delete m2;
    delete resultado;
}
