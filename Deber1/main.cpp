#include <iostream>
#include "Fraccion.h"
using namespace std;

int main() {
    Fraccion f1 (5, 4);
    Fraccion f2(3, 4);


    cout << "Fracción 1: ";
    f1.mostrar();

    cout << "Fracción 2: ";
    f2.mostrar();

        Fraccion resultado = f1.multiplicar(f2);
    cout << "Resultado de la multiplicación: ";
    resultado.mostrar();

    return 0;
}
