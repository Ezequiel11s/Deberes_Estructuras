#include <iostream>
#include "Fraccion.h"
using namespace std;

int main() {
    Fraccion f1 (5, 4);
    Fraccion f2(3, 4);


    cout << "Fracci�n 1: ";
    f1.mostrar();

    cout << "Fracci�n 2: ";
    f2.mostrar();

        Fraccion resultado = f1.multiplicar(f2);
    cout << "Resultado de la multiplicaci�n: ";
    resultado.mostrar();

    return 0;
}
