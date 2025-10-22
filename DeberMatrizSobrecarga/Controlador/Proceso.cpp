#include "Proceso.h"
#include <iostream>
using namespace std;

void Proceso::ejecutar() {
    Datos<float> *m1 = new Datos<float>(3,3);
    Datos<float> *m2 = new Datos<float>(3,3);
    Datos<float> *res = new Datos<float>(3,3);

    m1->segmentar();
    m2->segmentar();
    res->segmentar();

    m1->encerrar();
    m2->encerrar();
    res->encerrar();

    m1->ingresarDatos();
    m2->ingresarDatos();

    Datos<float>::multiplicar(m1, m2, res);

    res->imprimir("\nMatriz resultado:");

    m1->liberarMemoria();
    m2->liberarMemoria();
    res->liberarMemoria();

    delete m1;
    delete m2;
    delete res;
}
